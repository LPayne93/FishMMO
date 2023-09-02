﻿using UnityEngine;

[RequireComponent(typeof(Character))]
public class TargetController : MonoBehaviour
{
	public const float MAX_TARGET_DISTANCE = 50.0f;
	public const float TARGET_UPDATE_RATE = 1.0f;

	public Character Character;
	public LayerMask LayerMask;
#if UNITY_CLIENT
	private float nextTick = 0.0f;
	//private UILabel3D targetLabel;

	public TargetInfo LastTarget;
	public TargetInfo Current;

	void Awake()
	{
		//targetLabel = UILabel3D.Create("", 32, transform);
		//targetLabel.enabled = false;
	}

	void Update()
	{
		// update target label for the client
		if (nextTick <= 0.0f)
		{
			nextTick = TARGET_UPDATE_RATE;

			LastTarget = Current;
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			//Camera.main.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0));

			Current = GetTarget(this, ray, MAX_TARGET_DISTANCE);
			// outline?
			if (LastTarget.target != null && Current.target != null && LastTarget.target != Current.target)
			{
				Outline previous = LastTarget.target.GetComponent<Outline>();
				if (previous != null)
				{
					//targetLabel.enabled = false;
					previous.enabled = false;
				}

				Outline nextOutline = Current.target.GetComponent<Outline>();
				if (nextOutline != null)
				{
					//targetLabel.SetPosition(current.target.position);
					//targetLabel.SetText(current.target.name);
					//targetLabel.enabled = true;
					nextOutline.enabled = true;
				}
			}
		}
		nextTick -= Time.deltaTime;
	}
#endif

	public static TargetInfo GetTarget(TargetController controller, Ray ray, float maxDistance)
	{
		float distance = maxDistance.Clamp(0.0f, MAX_TARGET_DISTANCE);
		RaycastHit hit;
		if (Physics.Raycast(ray, out hit, distance, controller.LayerMask))
		{
			//Debug.DrawLine(ray.origin, hit.point, Color.red, 1);
			//Debug.Log("hit: " + hit.transform.name + " pos: " + hit.point);
			return new TargetInfo(hit.transform, hit.point);
		}
		return new TargetInfo(null, ray.GetPoint(distance));
	}
}