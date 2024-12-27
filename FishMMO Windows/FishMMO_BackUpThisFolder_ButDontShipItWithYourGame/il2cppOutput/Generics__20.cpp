﻿#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, &p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualFuncInvoker6Invoker<R, T1*, T2*, T3*, T4*, T5, T6>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualFuncInvoker6Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualFuncInvoker6Invoker<R, T1*, T2*, T3*, T4*, T5, T6>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6Invoker<R, T1*, T2*, T3*, T4*, T5, T6>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6Invoker<R, T1*, T2*, T3*, T4*, T5, T6>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2*, T3*, T4*, T5*, T6*, T7, T8>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7 p7, T8 p8)
	{
		R ret;
		void* params[8] = { p1, p2, p3, p4, p5, p6, &p7, &p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8;
struct Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115;
struct Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09;
struct Action_1_t66B514BE877E216616DEDD40416127189FE16FA3;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct AsyncOperation_1_t6D50D23D871DE8AAAD8EEE2A36DB1231E3725908;
struct AsyncOperation_1_tF04FB2766C44DCE6A4DB61B14AB8EE31A6F7FE97;
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9;
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88;
struct EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B;
struct EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30;
struct EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA;
struct EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913;
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tD62FEF82C38D2F936C4A0BE93BCEEE9CF7A7DB06;
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630;
struct Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_tAA84235D71BA06591784319703175CFB5E386A7F;
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121;
struct Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct IEnumerable_1_tED602875C5D5C7BECAD2C641945DF5416536FA7B;
struct IEnumerable_1_tB708E9C2FA823B01C747E05E9A94F71093AAE6F1;
struct IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A;
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
struct IEnumerable_1_t4090E8CF3CA50BDD8A30A5ADC2C2A61569E8AAB1;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IOrderedEnumerable_1_tC720FA06F1A450C4355F836CB7F7A6E72A5BD8B6;
struct IOrderedEnumerable_1_tEC69DE4EAD0C8A8943156A96E6B44A96825EBBB2;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC;
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C;
struct List_1_t592DF2E59D6E244DA0041698383484A07C7E0480;
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064;
struct List_1_tD19F7E0FCBD7C3E8D363733582EF93B341DD3039;
struct List_1_tF9F2510E1F31EAAB4FF93BF5D2FD123A1BA401D8;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259;
struct Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
struct ReadOnlyCollection_1_t6B7DBAE606F01BC50D92947B4B66E0A9EB9BDF64;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93;
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
struct TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7;
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
struct TaskFactory_1_t38FA2E08CB3E397D4EAEB78FF83BFC2FF0087800;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345;
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2;
struct VoidAsyncOperationWithData_1_t59BA201AC2849A9BB8AC8A629CE8DB5206D3BB13;
struct VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889;
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3;
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
struct WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F;
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6;
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B;
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
struct VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143;
struct VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct FieldInfo_t;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
struct ICollectionDragAndDropController_t30018C4F1C5ADA75B5E68B48A7BACE33E851168C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89;
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct IVisualElementScheduler_tA68650FA9218398E77265748741B091638336FD8;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3;
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD;
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct NpgsqlConnector_tA38C1DF6C9356F33C082F6124FF5FD0BEB3E26E7;
struct NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F;
struct NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992;
struct NpgsqlParameterCollection_tFE71BB33FACF70D5DE420E928A149E529E7EC6EB;
struct NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC;
struct NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct PostgresType_tF7A629B90ACBA404AE9E7E10908B04485A498F31;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct ResettableCancellationTokenSource_t34607F31DE0C9BE700A3C66ADBAC66DCA41DF155;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9;
struct Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB;
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct VolumeCollection_t77FAA5F213B6C65136416F16C37041371D041408;
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1;
struct VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833;
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621;
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72;
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1;
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
struct Selection_tDC7A99533BDD2EB0142DB028DB38A7B4D4BBC93B;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct Data_t43E3238277579E631EA4E8016E61966D79F5B62E;
struct ParameterStream_tFF19EB8A5855383776BC1393FC0BA21B79D770BC;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualElementScheduler_tA68650FA9218398E77265748741B091638336FD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1__ctor_mDAE57CDDED83C3369618689CFB5BBE1F50B57CD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E  : public RuntimeObject
{
};
struct U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8  : public RuntimeObject
{
	Type_t* ___value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C  : public RuntimeObject
{
	ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259  : public RuntimeObject
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_List;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_CreateFunc;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnGet;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnRelease;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	RuntimeObject* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7  : public RuntimeObject
{
	Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* ____task;
};
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task;
};
struct VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889  : public RuntimeObject
{
	int32_t ___U3CselectedComponentU3Ek__BackingField;
	int32_t ___m_SelectedCameraIndex;
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___m_CamerasArray;
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras;
	Type_t* ___U3CtargetRenderPipelineU3Ek__BackingField;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___volumes;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___savedStates;
};
struct WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F  : public RuntimeObject
{
	TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* ___completion;
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* ___currentResult;
};
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey;
};
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state;
};
struct AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8  : public RuntimeObject
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768  : public RuntimeObject
{
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View;
	RuntimeObject* ___m_ItemsSource;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
};
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801  : public RuntimeObject
{
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F  : public RuntimeObject
{
	bool ___IsPopulated;
	int32_t ___Position;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___Lengths;
};
struct NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC  : public RuntimeObject
{
	PostgresType_tF7A629B90ACBA404AE9E7E10908B04485A498F31* ___U3CPostgresTypeU3Ek__BackingField;
};
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086  : public RuntimeObject
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CbindableElementU3Ek__BackingField;
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___U3CanimatorU3Ek__BackingField;
	int32_t ___U3CindexU3Ek__BackingField;
	int32_t ___U3CidU3Ek__BackingField;
	bool ___U3CisDragGhostU3Ek__BackingField;
	Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___onGeometryChanged;
	EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30* ___m_GeometryChangedEventCallback;
	Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___onDestroy;
};
struct ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0  : public RuntimeObject
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___timerUpdateStopCondition;
	int64_t ___U3CstartMsU3Ek__BackingField;
	int64_t ___U3CdelayMsU3Ek__BackingField;
	int64_t ___U3CintervalMsU3Ek__BackingField;
	int64_t ___U3CendTimeMsU3Ek__BackingField;
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621  : public RuntimeObject
{
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___U3CstackU3Ek__BackingField;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CbaseComponentTypeArrayU3Ek__BackingField;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___U3CglobalDefaultProfileU3Ek__BackingField;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___U3CqualityDefaultProfileU3Ek__BackingField;
	ReadOnlyCollection_1_t6B7DBAE606F01BC50D92947B4B66E0A9EB9BDF64* ___U3CcustomDefaultProfilesU3Ek__BackingField;
	VolumeCollection_t77FAA5F213B6C65136416F16C37041371D041408* ___m_VolumeCollection;
	VolumeComponentU5BU5D_t9623DFEA760C190B40486621A48932B26706D143* ___m_ComponentsDefaultState;
	VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103* ___m_ParametersDefaultState;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_TempColliders;
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_DefaultStack;
	List_1_tF9F2510E1F31EAAB4FF93BF5D2FD123A1BA401D8* ___m_CreatedVolumeStacks;
	bool ___U3CisInitializedU3Ek__BackingField;
};
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72  : public RuntimeObject
{
	bool ___m_OverrideState;
};
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8  : public RuntimeObject
{
	Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A* ___components;
	VolumeParameterU5BU5D_t7025A98CA20F310D68D653DE8E37EA31FF25E103* ___parameters;
	bool ___requiresReset;
	bool ___requiresResetForAllProperties;
	bool ___U3CisValidU3Ek__BackingField;
};
struct ConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA 
{
	Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* ___m_task;
	bool ___m_continueOnCapturedContext;
};
struct CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source;
	int32_t ____index;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 
{
	String_t* ___Item1;
	Type_t* ___Item2;
};
struct VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3 : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72 {};
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FieldInfo_t  : public MemberInfo_t
{
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8 
{
	union
	{
		struct
		{
		};
		uint8_t VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8__padding[1];
	};
};
struct VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___menu;
};
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A  : public ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementU3Ek__BackingField;
	bool ___isScheduled;
	bool ___U3CisActiveU3Ek__BackingField;
	bool ___U3CisDetachingU3Ek__BackingField;
	EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88* ___m_OnAttachToPanelCallback;
	EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B* ___m_OnDetachFromPanelCallback;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Status_tE01E96437CB49CBFF241304B0B5F57A27CDE4B5F 
{
	int32_t ___value__;
};
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345  : public CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___m_Pool;
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_CollectionView;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ActiveItems;
	RuntimeObject* ___m_DraggedItem;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_DeferredScrollToItemIndex;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_PerformDeferredScrollToItem;
	RuntimeObject* ___m_ScheduleDeferredScrollToItem;
	int32_t ___m_LastFocusedElementIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_LastFocusedElementTreeChildIndexes;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___m_VisibleItemPredicateDelegate;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ScrollInsertionList;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_EmptyRows;
};
struct VirtualizationChange_tE573AF23BD03F8D14280D918631898C4E6B445A1 
{
	int32_t ___value__;
};
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2 : public BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A {};
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AlternatingRowBackground_t5970E82515609444BB4F9E993645CA4A9A9803E5 
{
	int32_t ___value__;
};
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	int32_t ___value__;
};
struct CameraType_tCA1017DBE96964E1D967942FB98F152F14121FCD 
{
	int32_t ___value__;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo;
};
struct ClipMethod_tDE393081E6CA2C9C1A8C3D731613580585767391 
{
	int32_t ___value__;
};
struct CollectionVirtualizationMethod_tF4A3B1303302D2B17F74CDB7D8A5287C8B056C88 
{
	int32_t ___value__;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct DataRowVersion_t18719565B05A4F39157C13409A7565BC9CAFB760 
{
	int32_t ___value__;
};
struct DbType_tAB317B97F25F156130CA6BD83234551B0937D738 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct DisplayStyle_t87BEDA2F78F764785ED41FC5E622ECB0091B2459 
{
	int32_t ___value__;
};
struct DragAndDropPosition_tC9A4DD8C1BF3067240258FF2C81E5F31CEE007AF 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FormatCode_tC54776C9E61EC32FBBC909BB26C629519279E599 
{
	int16_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct NpgsqlDbType_t0402672C2EAC80DDE8ED604C8F851B78EF001F37 
{
	int32_t ___value__;
};
struct NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711  : public RuntimeObject
{
	NpgsqlConnector_tA38C1DF6C9356F33C082F6124FF5FD0BEB3E26E7* ___Connector;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CUnderlyingU3Ek__BackingField;
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____underlyingSocket;
	bool ___U3CMessageLengthValidationU3Ek__BackingField;
	ResettableCancellationTokenSource_t34607F31DE0C9BE700A3C66ADBAC66DCA41DF155* ____timeoutCts;
	int32_t ___U3CSizeU3Ek__BackingField;
	bool ____copyMode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CTextEncodingU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Buffer;
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____textEncoder;
	int32_t ___WritePosition;
	int32_t ____messageBytesFlushed;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____messageLength;
	ParameterStream_tFF19EB8A5855383776BC1393FC0BA21B79D770BC* ____parameterStream;
	bool ____disposed;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OwnedState_t0957CA36E21DE8A443B616EBE83B25CCCA70B5A4 
{
	uint8_t ___value__;
};
struct ParameterDirection_t5F6BB84F4123F4C10747BBAEB2336560006283C3 
{
	int32_t ___value__;
};
struct PickingMode_t5699BF9E5F2587E0D297984D5BF5B63B768E66AC 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RenderDataDirtyTypes_tEF0AE4EB7DF790A711AA45103050432B8FEDB907 
{
	int32_t ___value__;
};
struct RenderDataFlags_t5FE970B94CB31B4691C29B856A2A5848BDEACB66 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScrollViewMode_t6968C4B2BB3C46CF458E96BCE644E88B6893DE17 
{
	int32_t ___value__;
};
struct ScrollerVisibility_t92D9B3B68D98EF2FBB3B743F7D5CF140CA3C0778 
{
	int32_t ___value__;
};
struct SelectionType_t606E5DED60240D7E52388344A8A1EF4EC4E54079 
{
	int32_t ___value__;
};
struct SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB  : public RuntimeObject
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollOffset;
	int32_t ___firstVisibleIndex;
	float ___contentPadding;
	float ___contentHeight;
	int32_t ___anchoredItemIndex;
	float ___anchorOffset;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833  : public VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CpipelineTypesU3Ek__BackingField;
};
struct DragState_tB14E29E7194B5F86B9F1EE6951E43897A3CB1A89 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct NestedInteractionKind_tB05346E2CBA2B1468842CC149E572071F6BF123A 
{
	int32_t ___value__;
};
struct TouchScrollBehavior_tDFF4DB42BA6E5CFD89F263270DEBDB5E6CF4E66E 
{
	int32_t ___value__;
};
struct RenderTargetMode_tAE75E29BB61A64BDE7646D5CBD353B64BCFA9F3A 
{
	int32_t ___value__;
};
struct U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 ___U3CU3Et__builder;
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* ___U3CU3E4__this;
	ConfiguredTaskAwaiter_t1B79F058B7765DEB6DAEE97B8760E819CAED47BA ___U3CU3Eu__1;
};
struct AsyncOperation_1_t6D50D23D871DE8AAAD8EEE2A36DB1231E3725908  : public AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ____registration;
	bool ____pooled;
	bool ____runContinuationsAsynchronously;
	int32_t ____completionReserved;
	VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	RuntimeObject* ____schedulingContext;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	int16_t ____currentId;
	AsyncOperation_1_t6D50D23D871DE8AAAD8EEE2A36DB1231E3725908* ___U3CNextU3Ek__BackingField;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CCancellationTokenU3Ek__BackingField;
};
struct Nullable_1_tECF58D7A4E65F2CE88C8F803A5DAE20D3806D3AE 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_tE7B5C73F0EBB26551E3AB43199CC99CE6835D969 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93 : public RuntimeObject {};
struct StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
typedef Il2CppFullySharedGenericStruct StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5;
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE  : public RuntimeObject
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle;
	bool ___trackResurrection;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6  : public RuntimeObject
{
	bool ___m_IsRegistered;
	int32_t ___m_DragState;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Start;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 
{
	int32_t ___m_Allocator;
	Data_t43E3238277579E631EA4E8016E61966D79F5B62E* ___m_Data;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 
{
	int32_t ___insertAtIndex;
	int32_t ___parentId;
	int32_t ___childIndex;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem;
	int32_t ___dropPosition;
};
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_pinvoke
{
	int32_t ___insertAtIndex;
	int32_t ___parentId;
	int32_t ___childIndex;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem;
	int32_t ___dropPosition;
};
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_com
{
	int32_t ___insertAtIndex;
	int32_t ___parentId;
	int32_t ___childIndex;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem;
	int32_t ___dropPosition;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121  : public MulticastDelegate_t
{
};
struct Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7  : public MulticastDelegate_t
{
};
struct VoidAsyncOperationWithData_1_t59BA201AC2849A9BB8AC8A629CE8DB5206D3BB13 : public AsyncOperation_1_t6D50D23D871DE8AAAD8EEE2A36DB1231E3725908 {};
struct WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Nodes;
	LayoutDataStore_tE59A593CD73517DDC7C117B293E7C2C6F17DC364 ___m_Configs;
};
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD  : public DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6
{
	DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 ___m_LastDragPosition;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverBar;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverItemMarker;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverSiblingMarker;
	float ___m_LeftIndentation;
	float ___m_SiblingBottom;
	bool ___m_Enabled;
	RuntimeObject* ___U3CdragAndDropControllerU3Ek__BackingField;
};
struct NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992  : public DbParameter_tC4DFEE7A3DF97B1D878AAFFFB246188DBB9E0296
{
	uint8_t ____precision;
	uint8_t ____scale;
	int32_t ____size;
	Nullable_1_tE7B5C73F0EBB26551E3AB43199CC99CE6835D969 ____npgsqlDbType;
	String_t* ____dataTypeName;
	Nullable_1_tECF58D7A4E65F2CE88C8F803A5DAE20D3806D3AE ____cachedDbType;
	String_t* ____name;
	RuntimeObject* ____value;
	String_t* ____sourceColumn;
	String_t* ___U3CTrimmedNameU3Ek__BackingField;
	RuntimeObject* ___U3CConvertedValueU3Ek__BackingField;
	NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___U3CLengthCacheU3Ek__BackingField;
	NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___U3CHandlerU3Ek__BackingField;
	int16_t ___U3CFormatCodeU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	int32_t ___U3CDirectionU3Ek__BackingField;
	int32_t ___U3CSourceVersionU3Ek__BackingField;
	bool ___U3CSourceColumnNullMappingU3Ek__BackingField;
	NpgsqlParameterCollection_tFE71BB33FACF70D5DE420E928A149E529E7EC6EB* ___U3CCollectionU3Ek__BackingField;
	PostgresType_tF7A629B90ACBA404AE9E7E10908B04485A498F31* ___U3CPostgresTypeU3Ek__BackingField;
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	bool ___localFlipsWinding;
	bool ___localTransformScaleZero;
	bool ___worldFlipsWinding;
	bool ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	bool ___pendingRepaint;
	bool ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastHeadCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstTailCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastTailCommand;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___worldTransformScaleZero;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___headMesh;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___tailMesh;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	float ___backgroundAlpha;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
	int32_t ___pendingRepaint;
	int32_t ___pendingHierarchicalRepaint;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___active;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	List_1_tD19F7E0FCBD7C3E8D363733582EF93B341DD3039* ___parameterList;
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___m_ParameterReadOnlyCollection;
};
struct VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___components;
	bool ___isDirty;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___m_Handle;
};
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5  : public ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD
{
	int32_t ___m_DragStartIndex;
	int32_t ___m_CurrentIndex;
	float ___m_SelectionHeight;
	float ___m_LocalOffsetOnStart;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CurrentPointerPosition;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_Item;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_OffsetItem;
	bool ___U3CisDraggingU3Ek__BackingField;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData;
	bool ___shouldCutRenderChain;
	UIRenderer_t92C2C36451BAD524541C4C548B02D0EAC798644E* ___uiRenderer;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup;
	bool ___m_WorldClipIsInfinite;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___m_PickingMode;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___m_EnabledSelf;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	int32_t ___m_SubRenderTargetMode;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	List_1_t592DF2E59D6E244DA0041698383484A07C7E0480* ___m_Bindings;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementAdded;
	Action_1_t66B514BE877E216616DEDD40416127189FE16FA3* ___elementRemoved;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ___m_IsGlobal;
	float ___priority;
	float ___blendDistance;
	float ___weight;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___sharedProfile;
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders;
	int32_t ___m_PreviousLayer;
	float ___m_PreviousPriority;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* ___m_InternalProfile;
};
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	RuntimeObject* ___U3CbindingU3Ek__BackingField;
	String_t* ___U3CbindingPathU3Ek__BackingField;
};
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	int32_t ___m_FirstLayoutPass;
	int32_t ___m_HorizontalScrollerVisibility;
	int32_t ___m_VerticalScrollerVisibility;
	int64_t ___m_ElasticAnimationIntervalMs;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_AttachedRootVisualContainer;
	float ___m_SingleLineHeight;
	bool ___m_MouseWheelScrollSizeIsInline;
	float ___m_HorizontalPageSize;
	float ___m_VerticalPageSize;
	float ___m_MouseWheelScrollSize;
	float ___m_ScrollDecelerationRate;
	float ___k_ScaledPixelsPerPointMultiplier;
	float ___k_TouchScrollInertiaBaseTimeInterval;
	float ___m_Elasticity;
	int32_t ___m_TouchScrollBehavior;
	int32_t ___m_NestedInteractionKind;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontentViewportU3Ek__BackingField;
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3ChorizontalScrollerU3Ek__BackingField;
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3CverticalScrollerU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentAndVerticalScrollContainer;
	float ___previousVerticalTouchScrollTimeStamp;
	float ___previousHorizontalTouchScrollTimeStamp;
	float ___elapsedTimeSinceLastVerticalTouchScroll;
	float ___elapsedTimeSinceLastHorizontalTouchScroll;
	int32_t ___m_Mode;
	RuntimeObject* ___m_ScheduledLayoutPassResetItem;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_StartPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SpringBackVelocity;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LowBounds;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_HighBounds;
	float ___m_LastVelocityLerpTime;
	bool ___m_StartedMoving;
	bool ___m_TouchPointerMoveAllowed;
	bool ___m_TouchStoppedVelocity;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CapturedTarget;
	EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA* ___m_CapturedTargetPointerMoveCallback;
	EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913* ___m_CapturedTargetPointerUpCallback;
	RuntimeObject* ___m_PostPointerUpAnimation;
};
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___itemsChosen;
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___selectionChanged;
	Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115* ___selectedIndicesChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_SelectionNotChanged;
	Func_2_tD62FEF82C38D2F936C4A0BE93BCEEE9CF7A7DB06* ___canStartDrag;
	Func_2_tAA84235D71BA06591784319703175CFB5E386A7F* ___setupDragAndDrop;
	Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0* ___dragAndDropUpdate;
	Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0* ___handleDrop;
	int32_t ___m_SelectionType;
	bool ___allowSingleClickChoice;
	bool ___m_HorizontalScrollingEnabled;
	int32_t ___m_ShowAlternatingRowBackgrounds;
	float ___m_FixedItemHeight;
	bool ___m_ItemHeightIsInline;
	int32_t ___m_VirtualizationMethod;
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView;
	CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* ___m_ViewController;
	CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* ___m_VirtualizationController;
	KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3* ___m_NavigationManipulator;
	SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* ___serializedVirtualizationData;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIds;
	Selection_tDC7A99533BDD2EB0142DB028DB38A7B4D4BBC93B* ___m_Selection;
	float ___m_LastHeight;
	bool ___m_IsRangeSelectionDirectionUp;
	ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* ___m_Dragger;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___m_ItemIndexChangedCallback;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_ItemsSourceChangedCallback;
	RuntimeObject* ___m_RebuildScheduled;
	int32_t ___m_PreviousRefreshedCount;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TouchDownPosition;
};
struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields
{
	U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* ___U3CU3E9;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__33_0;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__33_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__33_2;
};
struct U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields
{
	U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* ___U3CU3E9;
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* ___U3CU3E9__34_0;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___U3CU3E9__36_0;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__43_0;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__43_1;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___U3CU3E9__43_2;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C_StaticFields
{
	ValueTuple_2U5BU5D_t76AF1876C6906F5A52DD507AC0D00139315E9453* ___s_emptyArray;
};
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields
{
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___s_ComponentTypes;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___U3CadditionalCameraDatasU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerUpdate;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerReplaceData;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfilerMarkerEvaluateVolumeDefaultState;
	Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC* ___s_Instance;
	Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9* ___s_SupportedVolumeComponentsForRenderPipeline;
};
struct Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC_StaticFields
{
	TaskFactory_1_t38FA2E08CB3E397D4EAEB78FF83BFC2FF0087800* ___s_defaultFactory;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___focusableProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tabIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___delegatesFocusProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___canGrabFocusProperty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___horizontalScrollerVisibilityProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___verticalScrollerVisibilityProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___scrollOffsetProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___horizontalPageSizeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___verticalPageSizeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___mouseWheelScrollSizeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___scrollDecelerationRateProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___elasticityProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___touchScrollBehaviorProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nestedInteractionKindProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___modeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___elasticAnimationIntervalMsProperty;
	float ___k_DefaultScrollDecelerationRate;
	float ___k_DefaultElasticity;
	String_t* ___ussClassName;
	String_t* ___viewportUssClassName;
	String_t* ___horizontalVariantViewportUssClassName;
	String_t* ___verticalVariantViewportUssClassName;
	String_t* ___verticalHorizontalVariantViewportUssClassName;
	String_t* ___contentAndVerticalScrollUssClassName;
	String_t* ___contentUssClassName;
	String_t* ___horizontalVariantContentUssClassName;
	String_t* ___verticalVariantContentUssClassName;
	String_t* ___verticalHorizontalVariantContentUssClassName;
	String_t* ___hScrollerUssClassName;
	String_t* ___vScrollerUssClassName;
	String_t* ___horizontalVariantUssClassName;
	String_t* ___verticalVariantUssClassName;
	String_t* ___verticalHorizontalVariantUssClassName;
	String_t* ___scrollVariantUssClassName;
};
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___itemsSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectionTypeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedItemProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedItemsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedIndexProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___selectedIndicesProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showBorderProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___reorderableProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___horizontalScrollingEnabledProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___showAlternatingRowBackgroundsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___virtualizationMethodProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___fixedItemHeightProperty;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_RefreshMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_RebuildMarker;
	List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7* ___k_EmptyItems;
	String_t* ___k_InvalidTemplateError;
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___s_ItemHeightProperty;
	String_t* ___ussClassName;
	String_t* ___borderUssClassName;
	String_t* ___itemUssClassName;
	String_t* ___dragHoverBarUssClassName;
	String_t* ___dragHoverMarkerUssClassName;
	String_t* ___itemDragHoverUssClassName;
	String_t* ___itemSelectedVariantUssClassName;
	String_t* ___itemAlternativeBackgroundUssClassName;
	String_t* ___listScrollViewUssClassName;
	String_t* ___backgroundFillUssClassName;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959  : public RuntimeArray
{
	ALIGN_FIELD (8) Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* m_Items[1];

	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D  : public RuntimeArray
{
	ALIGN_FIELD (8) VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* m_Items[1];

	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_op_Implicit_m7A7112971764E232021D2ACB3A66B7F785AF604A_gshared (Il2CppFullySharedGenericStruct ___0_v, StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_m79B8FC8FEE64AB2C6664261B584A6AA66FF66B7F_gshared (StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5 ___0_lhs, StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_recycledItem, int32_t ___1_newIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_recycledItem, int32_t ___1_previousIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_1__ctor_m100732A3B92418EDBD8F50012FA6A96267C7F67F_gshared (AsyncOperation_1_tF04FB2766C44DCE6A4DB61B14AB8EE31A6F7FE97* __this, bool ___0_runContinuationsAsynchronously, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, bool ___2_pooled, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedCameraIndex_m83C93DE33689D5F632215A910F52A4907A8ED903_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerable_ElementAt_TisIl2CppFullySharedGenericAny_m5573323F3CCCE5C03A13D3EA2264B7BF050BD08B_gshared (RuntimeObject* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisIl2CppFullySharedGenericAny_m754E9486E0B3F9C50B4261F1F2088D02098E214B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* ___0_component, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_gshared_inline (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeDebugSettings_1_get_volumeComponentsPathAndType_m3C883DD8FD865B32ACC2A42B8393BE0FF35F4EDB_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m2548D98AB5764A256005A7CDF6B5C31B09160C54_gshared (U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mE810B96CFE4683761086D777FD5947FA66EA9255_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponent_mB98032B7495A08D17A106619BBAD520939E84376_gshared_inline (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___0_component, FieldInfo_t* ___1_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, RuntimeObject** ___1_component, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponents_TisIl2CppFullySharedGenericAny_mD0F0A24D99D5E839646E6037D7E2DE05A9E1B67D_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisIl2CppFullySharedGenericAny_mBFDDFC7FE4B8D86F86B07E39D2B7EF7CEE06B123_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* VolumeDebugSettings_1_GetStates_m0FE8DECDEDB5142DC87951D7604FE4252AB2604B_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_ChangedStates_m5A7E3AE70CEAE4BE0C7A44DBEF813C5B39CD1C24_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___0_newStates, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_ComputeWeight_m2A2083BB02163D67BCCF7318FA0D20CD39B1211F_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_triggerPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_m7E4FCA28B813E61E3F552DAEB59FD0586B67077A_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA0D4A157D5453421E5E883B0A9489E97328A9BC_gshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_keySelector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_overrideState, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mFB9A5ACACD63E673940ABCCD71BFBCF5939514B3_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_lhs, Il2CppFullySharedGenericAny ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mE6CB1D07EC2DE1DE825EB7AE097CA54AB980218F_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_GetValue_TisIl2CppFullySharedGenericAny_m1802EB8111365F0224F3D40314C1DDC085109D46_gshared (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m4923307A5CF439F17587173F7C04053ED22BB0C6_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, int32_t ___0_creationOptions, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mD5334A91B372F17CC957E2376D067FD29F493A72_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, Il2CppFullySharedGenericAny ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m4C03ED1589D48A864F726E0FDF00D8E976DDCE0F_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_mA920B8E0BECD7D1B6C8AC11BEB43AD07864DB8F8_gshared (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, int32_t ___0_state, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___1_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCanceled_m6069824D799921F76E03A0EED077F2E8B7090826_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* Result_get_Error_mA9CAACBF365B2B74E821767A0713ADA11148EC69_gshared_inline (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A_gshared (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* Enumerable_CombinePredicates_TisIl2CppFullySharedGenericAny_m93E135AF98923DA7992DF8B462586C255923A45D_gshared (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate1, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m4BA67A3D7DA249425AA8E0A0EC94AB535444D1AD_gshared (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mFECEFDEFE0154FD35AB3600D1EC1BCA3688FB81D_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m299616CF7575CD317723CE89D3BA8B8F04A9B722_gshared_inline (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisIl2CppFullySharedGenericAny_m557436C09046F5D4CF328BBF348EF8579340BED4_gshared (Il2CppFullySharedGenericAny ___0_min, Il2CppFullySharedGenericAny ___1_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496 (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030 (int32_t ___0_v, const RuntimeMethod* method)
{
	StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericStruct, StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5*, const RuntimeMethod*))StyleEnum_1_op_Implicit_m7A7112971764E232021D2ACB3A66B7F785AF604A_gshared)((Il2CppFullySharedGenericStruct)&___0_v, (StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline bool StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD (StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___0_lhs, StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5, StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5, const RuntimeMethod*))StyleEnum_1_op_Equality_m79B8FC8FEE64AB2C6664261B584A6AA66FF66B7F_gshared)((StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5)&___0_lhs, (StyleEnum_1_t8C8AEB3390A0F933B5DC2B061581ED98A14D1FB5)&___1_rhs, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, (Il2CppFullySharedGenericAny)___0_arg, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)(__this, method);
}
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837 (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2 (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* __this, ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___0_scrollView, const RuntimeMethod* method) ;
inline void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697 (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_disableClipping_m3E786643EBFEE5BDC0778C835140934FF3FF80CB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
inline void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject*, const RuntimeMethod*))ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared_inline)(__this, ___0_element, method);
}
inline int32_t VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F_gshared)(__this, method);
}
inline void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_recycledItem, int32_t ___1_newIndex, const RuntimeMethod* method)
{
	((  void (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, RuntimeObject*, int32_t, const RuntimeMethod*))VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared)(__this, ___0_recycledItem, ___1_newIndex, method);
}
inline void ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E_gshared)(__this, method);
}
inline void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
inline int32_t VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_id_m765F123306544777F8B1E273AFB8A0A1E94C4857_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, bool ___1_enable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_sibling, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_recycledItem, int32_t ___1_previousIndex, const RuntimeMethod* method)
{
	((  void (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t, const RuntimeMethod*))VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared)(__this, ___0_recycledItem, ___1_previousIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE* VisualElement_get_layoutNode_mDEB89DEE452812FE70D90C54203C03DC216A66CB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LayoutNode_get_IsDirty_m27F22B3DF753A0842461A7F06E69EC74FF0C3A0F (LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE* __this, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_schedule_m2BFE6967ED82371ACE1CD1FC32B8D8B93646ED76 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_outChildIndexes, const RuntimeMethod* method) ;
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_childIndexes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659 (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VisualElement_get_classList_mF29F87BE5A1BFC82854AD0D6355A713D5AC517C1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_child, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB (float ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019 (float ___0_v, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerExtension_GetRecycledItemFromIndex_m2DCBCAD63977E19CCB2888783463D3CCB7956F5C (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_listView, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_IndexOf_m1CC000F2192D5D561AE87B2EC3AB312BD0D714AE (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Insert_m95ACF6FC7BCF788C955714E8DADF07FACE5C0031 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_index, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_element, const RuntimeMethod* method) ;
inline void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny)___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared_inline)(__this, method);
}
inline void Action_1__ctor_mC0F49DD2F8ED1E95FA4D285BFC8AB8185ACAEA4D (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableCollectionItem_add_onDestroy_m409E356FF514F61FFD076178469E829C495DAE01 (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___0_value, const RuntimeMethod* method) ;
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableCollectionItem_remove_onDestroy_mF9E3F8DCD03F5804E8A886C5D06AA8F945E43097 (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68 (BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_handler, const RuntimeMethod* method) ;
inline void AsyncOperation_1__ctor_mDAE57CDDED83C3369618689CFB5BBE1F50B57CD2 (AsyncOperation_1_t6D50D23D871DE8AAAD8EEE2A36DB1231E3725908* __this, bool ___0_runContinuationsAsynchronously, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, bool ___2_pooled, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperation_1_t6D50D23D871DE8AAAD8EEE2A36DB1231E3725908*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool, const RuntimeMethod*))AsyncOperation_1__ctor_m100732A3B92418EDBD8F50012FA6A96267C7F67F_gshared)(__this, ___0_runContinuationsAsynchronously, ___1_cancellationToken, ___2_pooled, method);
}
inline int32_t VolumeDebugSettings_1_get_selectedCameraIndex_m83C93DE33689D5F632215A910F52A4907A8ED903 (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, const RuntimeMethod*))VolumeDebugSettings_1_get_selectedCameraIndex_m83C93DE33689D5F632215A910F52A4907A8ED903_gshared)(__this, method);
}
inline RuntimeObject* VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, const RuntimeMethod*))VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF_gshared)(__this, method);
}
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F (RuntimeObject* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* il2cppRetVal;
	((  void (*) (RuntimeObject*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_ElementAt_TisIl2CppFullySharedGenericAny_m5573323F3CCCE5C03A13D3EA2264B7BF050BD08B_gshared)((RuntimeObject*)___0_source, ___1_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_gshared)(___0_source, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
inline void List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_allCamerasCount_m7B9CAA9E8F2BC5587942A4CCBF4D6CA1FFD01BDC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_GetAllCameras_m55D302710121EEBC17D2F6EE4AE975C37ECC53F4 (CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___0_cameras, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
inline bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject**, const RuntimeMethod*))Component_TryGetComponent_TisIl2CppFullySharedGenericAny_m754E9486E0B3F9C50B4261F1F2088D02098E214B_gshared)(__this, ___0_component, method);
}
inline void List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline int32_t VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_inline (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, const RuntimeMethod*))VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_gshared_inline)(__this, method);
}
inline List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeDebugSettings_1_get_volumeComponentsPathAndType_m3C883DD8FD865B32ACC2A42B8393BE0FF35F4EDB (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method)
{
	return ((  List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, const RuntimeMethod*))VolumeDebugSettings_1_get_volumeComponentsPathAndType_m3C883DD8FD865B32ACC2A42B8393BE0FF35F4EDB_gshared)(__this, method);
}
inline ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286 (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void U3CU3Ec__DisplayClass22_0__ctor_m2548D98AB5764A256005A7CDF6B5C31B09160C54 (U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8*, const RuntimeMethod*))U3CU3Ec__DisplayClass22_0__ctor_m2548D98AB5764A256005A7CDF6B5C31B09160C54_gshared)(__this, method);
}
inline void Predicate_1__ctor_m2A873182717A1B746A08E8A60B68D63ACFD144BF (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared)(__this, ___0_object, ___1_method, method);
}
inline int32_t List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4 (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* __this, Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C*, Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7*, const RuntimeMethod*))List_1_FindIndex_mE810B96CFE4683761086D777FD5947FA66EA9255_gshared)(__this, ___0_match, method);
}
inline void VolumeDebugSettings_1_set_selectedComponent_mB98032B7495A08D17A106619BBAD520939E84376_inline (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, int32_t, const RuntimeMethod*))VolumeDebugSettings_1_set_selectedComponent_mB98032B7495A08D17A106619BBAD520939E84376_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* GraphicsSettings_get_currentRenderPipelineAssetType_m72CAAF0AAB3BD48DDAEF0087B12ACDDD6B007404 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeManager_GetVolumeComponentsForDisplay_m5D246FCE6526D6F83485745E8F4CFC694AFECDE8 (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, Type_t* ___0_currentPipelineAssetType, const RuntimeMethod* method) ;
inline Type_t* VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, const RuntimeMethod*))VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___0_component, FieldInfo_t* ___1_field, const RuntimeMethod* method)
{
	return ((  VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1*, FieldInfo_t*, const RuntimeMethod*))VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A_gshared)(__this, ___0_component, ___1_field, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4 (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
inline bool VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9 (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* __this, Type_t* ___0_type, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1** ___1_component, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1*, Type_t*, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1**, const RuntimeMethod*))VolumeProfile_TryGet_TisRuntimeObject_m94F2608D83F12FCFA1661C7D7EF19C26A0515933_gshared)(__this, ___0_type, ___1_component, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) ;
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisIl2CppFullySharedGenericAny_mD0F0A24D99D5E839646E6037D7E2DE05A9E1B67D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* VolumeManager_GetVolumes_mCD6F01BC37F4C6833FF56635904021D3E087BBDA (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_layerMask, const RuntimeMethod* method) ;
inline void Func_2__ctor_mE062569723CD2676B37650ADE8A6BBE243E2CA72 (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055 (RuntimeObject* ___0_source, Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared)(___0_source, ___1_predicate, method);
}
inline RuntimeObject* Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared)(___0_source, method);
}
inline VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)(___0_source, method);
}
inline void Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3 (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90 (RuntimeObject* ___0_source, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared)(___0_source, ___1_predicate, method);
}
inline FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline bool Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisIl2CppFullySharedGenericAny_mBFDDFC7FE4B8D86F86B07E39D2B7EF7CEE06B123_gshared)(___0_first, ___1_second, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* VolumeDebugSettings_1_GetStates_m0FE8DECDEDB5142DC87951D7604FE4252AB2604B (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method)
{
	return ((  VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, const RuntimeMethod*))VolumeDebugSettings_1_GetStates_m0FE8DECDEDB5142DC87951D7604FE4252AB2604B_gshared)(__this, method);
}
inline bool VolumeDebugSettings_1_ChangedStates_m5A7E3AE70CEAE4BE0C7A44DBEF813C5B39CD1C24 (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___0_newStates, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*, const RuntimeMethod*))VolumeDebugSettings_1_ChangedStates_m5A7E3AE70CEAE4BE0C7A44DBEF813C5B39CD1C24_gshared)(__this, ___0_newStates, method);
}
inline float VolumeDebugSettings_1_ComputeWeight_m2A2083BB02163D67BCCF7318FA0D20CD39B1211F (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_triggerPos, const RuntimeMethod* method)
{
	return ((  float (*) (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889*, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))VolumeDebugSettings_1_ComputeWeight_m2A2083BB02163D67BCCF7318FA0D20CD39B1211F_gshared)(__this, ___0_volume, ___1_triggerPos, method);
}
inline int32_t Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2 (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___0_array, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_m7E4FCA28B813E61E3F552DAEB59FD0586B67077A_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___0_array, (Il2CppFullySharedGenericAny)___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* VolumeManager_get_baseComponentTypeArray_mA7074538EEBCE5CA3CBAD4A72919B3BB8B6095C4_inline (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8 (RuntimeObject* ___0_source, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisIl2CppFullySharedGenericAny_m3F416675DC7A5572025B02ED373C41AD9ED8F6C4_gshared)(___0_source, ___1_predicate, method);
}
inline void Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897 (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8 (RuntimeObject* ___0_source, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, const RuntimeMethod*))Enumerable_OrderBy_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCA0D4A157D5453421E5E883B0A9489E97328A9BC_gshared)(___0_source, ___1_keySelector, method);
}
inline List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisIl2CppFullySharedGenericAny_m191EA129E511F9B8304FF8826A2DA645E06CCBF0_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* CustomAttributeExtensions_GetCustomAttribute_m8451F6949BEA92A69AE673CD95D6AD767B66880A (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_inherit, const RuntimeMethod* method) ;
inline List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_inline (const RuntimeMethod* method)
{
	return ((  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* (*) (const RuntimeMethod*))VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_gshared_inline)(method);
}
inline bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8 (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_overrideState, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, Il2CppFullySharedGenericAny, bool, const RuntimeMethod*))VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8_gshared)((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this, ___0_value, ___1_overrideState, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_op_Equality_mFB9A5ACACD63E673940ABCCD71BFBCF5939514B3 (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_lhs, Il2CppFullySharedGenericAny ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, Il2CppFullySharedGenericAny, const RuntimeMethod*))VolumeParameter_1_op_Equality_mFB9A5ACACD63E673940ABCCD71BFBCF5939514B3_gshared)(___0_lhs, ___1_rhs, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool VolumeParameter_1_Equals_mE6CB1D07EC2DE1DE825EB7AE097CA54AB980218F (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*, const RuntimeMethod*))VolumeParameter_1_Equals_mE6CB1D07EC2DE1DE825EB7AE097CA54AB980218F_gshared)(__this, ___0_other, method);
}
inline void VolumeParameter_GetValue_TisIl2CppFullySharedGenericAny_m1802EB8111365F0224F3D40314C1DDC085109D46 (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))VolumeParameter_GetValue_TisIl2CppFullySharedGenericAny_m1802EB8111365F0224F3D40314C1DDC085109D46_gshared)((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, il2cppRetVal, method);
}
inline void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8 (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE*, RuntimeObject*, bool, const RuntimeMethod*))WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared)(__this, ___0_target, ___1_trackResurrection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline void TaskCompletionSource_1__ctor_m66A94FA06482E1BF022E155A1243802F3BCEAD7C (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* __this, int32_t ___0_creationOptions, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*, int32_t, const RuntimeMethod*))TaskCompletionSource_1__ctor_m4923307A5CF439F17587173F7C04053ED22BB0C6_gshared)(__this, ___0_creationOptions, method);
}
inline Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* TaskCompletionSource_1_get_Task_m99C4E7D405DA7485360F4554AD219A778BBED3C7_inline (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* (*) (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)(__this, method);
}
inline void Result__ctor_mD5334A91B372F17CC957E2376D067FD29F493A72 (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, Il2CppFullySharedGenericAny ___0_argument, const RuntimeMethod* method)
{
	((  void (*) (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Result__ctor_mD5334A91B372F17CC957E2376D067FD29F493A72_gshared)((Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)__this, ___0_argument, method);
}
inline bool TaskCompletionSource_1_TrySetResult_m6421F3166CAE62DBE3D5B5C203F0399644E004A1 (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* __this, Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m4C03ED1589D48A864F726E0FDF00D8E976DDCE0F_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
inline void Result__ctor_mA920B8E0BECD7D1B6C8AC11BEB43AD07864DB8F8 (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, int32_t ___0_state, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___1_error, const RuntimeMethod* method)
{
	((  void (*) (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*, int32_t, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*, const RuntimeMethod*))Result__ctor_mA920B8E0BECD7D1B6C8AC11BEB43AD07864DB8F8_gshared)(__this, ___0_state, ___1_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4 (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
inline bool WebCompletionSource_1_TrySetCanceled_m6069824D799921F76E03A0EED077F2E8B7090826 (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F*, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*, const RuntimeMethod*))WebCompletionSource_1_TrySetCanceled_m6069824D799921F76E03A0EED077F2E8B7090826_gshared)(__this, ___0_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
inline Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* Task_1_get_Result_m4BD43EF8B903D5FEDED967167DB07B2941B7E6C9 (Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* __this, const RuntimeMethod* method)
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* il2cppRetVal;
	((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Task_1_get_Result_mF84A04F573B3700E098DF189233DA4CB3E14D53C_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* Result_get_Error_mA9CAACBF365B2B74E821767A0713ADA11148EC69_inline (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, const RuntimeMethod* method)
{
	return ((  ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* (*) (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*, const RuntimeMethod*))Result_get_Error_mA9CAACBF365B2B74E821767A0713ADA11148EC69_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_gshared)(method);
}
inline void AsyncTaskMethodBuilder_1_Start_TisU3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937_m38C56B931D2323D0F0219A4AFDBC6416FA04D52A (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)(__this, ___0_stateMachine, method);
}
inline Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B_gshared)(__this, method);
}
inline void Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A_gshared)(__this, method);
}
inline void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668 (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline bool Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* __this, Il2CppFullySharedGenericAny ___0_arg, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* Enumerable_CombinePredicates_TisIl2CppFullySharedGenericAny_m93E135AF98923DA7992DF8B462586C255923A45D (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate1, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))Enumerable_CombinePredicates_TisIl2CppFullySharedGenericAny_m93E135AF98923DA7992DF8B462586C255923A45D_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6 (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1_Dispose_m4BA67A3D7DA249425AA8E0A0EC94AB535444D1AD (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))Iterator_1_Dispose_m4BA67A3D7DA249425AA8E0A0EC94AB535444D1AD_gshared)(__this, method);
}
inline void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)(__this, method);
}
inline void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4 (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, il2cppRetVal, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140 (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
inline void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared)(__this, ___0_src, ___1_srcLen, method);
}
inline int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
inline void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, il2cppRetVal, method);
}
inline void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared)((WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*)__this, ___0_index, ___1_value, method);
}
inline int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, const RuntimeMethod*))WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline)(__this, method);
}
inline void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mFECEFDEFE0154FD35AB3600D1EC1BCA3688FB81D (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mFECEFDEFE0154FD35AB3600D1EC1BCA3688FB81D_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94 (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared)(__this, ___0_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline String_t* ExtractKeyDelegate_Invoke_m299616CF7575CD317723CE89D3BA8B8F04A9B722_inline (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, Il2CppFullySharedGenericAny, const RuntimeMethod*))ExtractKeyDelegate_Invoke_m299616CF7575CD317723CE89D3BA8B8F04A9B722_gshared_inline)((ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
inline void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared)(__this, ___0_extractKey, ___1_capacity, method);
}
inline bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2 (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared)((XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)__this, ___0_value, ___1_newValue, method);
}
inline int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared)(___0_key, ___1_index, ___2_count, method);
}
inline bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared)(__this, ___0_hashCode, ___1_key, ___2_index, ___3_count, ___4_entryIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3 (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared)(__this, ___0_key, ___1_index, ___2_count, ___3_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202 (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, const RuntimeMethod*))XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared)(__this, method);
}
inline void Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77 (int32_t ___0_min, int32_t ___1_max, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Math_ThrowMinMaxException_TisIl2CppFullySharedGenericAny_m557436C09046F5D4CF328BBF348EF8579340BED4_gshared)((Il2CppFullySharedGenericAny)&___0_min, (Il2CppFullySharedGenericAny)&___1_max, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_SetRef_m89BDD13EED80A828682061BEF6D21F334AE45FC7_inline (intptr_t ___0_handle, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_GetTargetHandle_mE33A9DC8A8FA880F9CAA057300E28BC8AE743CED (RuntimeObject* ___0_obj, intptr_t ___1_handle, int32_t ___2_type, const RuntimeMethod* method) ;
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
inline int32_t ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608_gshared)(__this, method);
}
inline int32_t ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_gshared_inline)(__this, method);
}
inline void ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, int32_t, const RuntimeMethod*))ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 14947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_activeItems_m5771BE91B7EE5DD1CD69E13A60D9DAD9F81E8535_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 14948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_0, NULL);
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}
}
// Method Definition Index: 14949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerticalVirtualizationController_1_VisibleItemPredicate_mF74E98CD97471A785AC772347CC1112EE868CBF0_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_i;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1;
		L_1 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_1, NULL);
		NullCheck(L_2);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_3;
		L_3 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(48, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_2);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_4;
		L_4 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_5;
		L_5 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_3, L_4, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		return L_5;
	}
}
// Method Definition Index: 14950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_firstVisibleItem_m82CAFF6CE0A7E6C2097640ECD92EE8971182E59C_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				goto IL_002c_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_1 = L_2;
				Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = __this->___m_VisibleItemPredicateDelegate;
				RuntimeObject* L_4 = V_1;
				NullCheck(L_3);
				bool L_5;
				L_5 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				V_2 = L_5;
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_002c_1;
				}
			}
			{
				RuntimeObject* L_7 = V_1;
				V_3 = L_7;
				goto IL_0053;
			}

IL_002c_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_8)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0046;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_4;
		V_3 = L_9;
		goto IL_0053;
	}

IL_0053:
	{
		RuntimeObject* L_10 = V_3;
		return L_10;
	}
}
// Method Definition Index: 14951
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_1;
		goto IL_0036;
	}

IL_000f:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = __this->___m_ActiveItems;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		V_0 = L_4;
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_5;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___m_VisibleItemPredicateDelegate;
		RuntimeObject* L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		V_3 = L_10;
		goto IL_004d;
	}

IL_0035:
	{
	}

IL_0036:
	{
		int32_t L_11 = V_0;
		V_4 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_5;
		V_3 = L_13;
		goto IL_004d;
	}

IL_004d:
	{
		RuntimeObject* L_14 = V_3;
		return L_14;
	}
}
// Method Definition Index: 14952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_visibleItemCount_m6808CEB4E53AC329802DC87298F99C249C3CF112_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				goto IL_002e_1;
			}

IL_0012_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_2 = L_2;
				Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = __this->___m_VisibleItemPredicateDelegate;
				RuntimeObject* L_4 = V_2;
				NullCheck(L_3);
				bool L_5;
				L_5 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				V_3 = L_5;
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_002e_1;
				}
			}
			{
				int32_t L_7 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_002e_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_8)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0048;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		int32_t L_9 = V_0;
		V_4 = L_9;
		goto IL_004d;
	}

IL_004d:
	{
		int32_t L_10 = V_4;
		return L_10;
	}
}
// Method Definition Index: 14953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_1 = L_0->___serializedVirtualizationData;
		return L_1;
	}
}
// Method Definition Index: 14954
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_firstVisibleIndex_m42843C9658F41E32ED1ADC19C8FC6C9061FB6423_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_0;
		L_0 = VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_0);
		int32_t L_1 = L_0->___firstVisibleIndex;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_2 = __this->___m_CollectionView;
		NullCheck(L_2);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_3;
		L_3 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_2, NULL);
		if (L_3)
		{
			G_B2_0 = L_1;
			goto IL_0025;
		}
		G_B1_0 = L_1;
	}
	{
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_4;
		L_4 = VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_4);
		int32_t L_5 = L_4->___firstVisibleIndex;
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0025:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_6 = __this->___m_CollectionView;
		NullCheck(L_6);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_7;
		L_7 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(9, L_7);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9;
		L_9 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
// Method Definition Index: 14955
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_set_firstVisibleIndex_mABDC3B8CEFB53554BFEB003AE479DF99A5DC13A2_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_0;
		L_0 = VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		L_0->___firstVisibleIndex = L_1;
		return;
	}
}
// Method Definition Index: 14956
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VerticalVirtualizationController_1_get_lastHeight_m2B0E6420EAB9557359C528A459EE84BDC1926D29_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		float L_1;
		L_1 = BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 14957
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerticalVirtualizationController_1_get_alwaysRebindOnRefresh_mB9C3A538BD60C07E276B0F753DA8E636CA862AB4_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// Method Definition Index: 14958
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1__ctor_mDD14CF7DF7586CFCB5E6EF69BC643CF090377096_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_collectionView, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B2_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B2_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B1_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B1_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B4_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B4_3 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B3_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B3_3 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B6_3 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B6_4 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B5_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B5_3 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B5_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_2 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = L_3;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = NULL;
			G_B4_2 = G_B2_0;
			G_B4_3 = G_B2_1;
			goto IL_0040;
		}
		G_B3_0 = L_6;
		G_B3_1 = NULL;
		G_B3_2 = G_B2_0;
		G_B3_3 = G_B2_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_7 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = L_8;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_10 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = L_10;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			G_B6_3 = G_B4_2;
			G_B6_4 = G_B4_3;
			goto IL_005f;
		}
		G_B5_0 = L_11;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_12 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_13, (RuntimeObject*)L_12, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = L_13;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 16)))->___U3CU3E9__33_2), (void*)L_14);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_005f:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_15 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_15, G_B6_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)G_B6_2, G_B6_1, G_B6_0, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(G_B6_4);
		G_B6_4->___m_Pool = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_4->___m_Pool), (void*)L_15);
		__this->___m_LastFocusedElementIndex = (-1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_16, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___m_LastFocusedElementTreeChildIndexes = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastFocusedElementTreeChildIndexes), (void*)L_16);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->___m_ScrollInsertionList = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollInsertionList), (void*)L_17);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_18 = ___0_collectionView;
		NullCheck(L_18);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_19;
		L_19 = BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline(L_18, NULL);
		CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, L_19, NULL);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_20 = ___0_collectionView;
		__this->___m_CollectionView = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectionView), (void*)L_20);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		__this->___m_ActiveItems = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveItems), (void*)L_21);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_22 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697(L_22, (RuntimeObject*)__this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		__this->___m_VisibleItemPredicateDelegate = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VisibleItemPredicateDelegate), (void*)L_22);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_23, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 28)), NULL);
		__this->___m_PerformDeferredScrollToItem = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PerformDeferredScrollToItem), (void*)L_23);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_24 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_24);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25;
		L_25 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_24);
		NullCheck(L_25);
		VisualElement_set_disableClipping_m3E786643EBFEE5BDC0778C835140934FF3FF80CB(L_25, (bool)0, NULL);
		return;
	}
}
// Method Definition Index: 14959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Refresh_mA648D405FBCF47E4BE5AAA5B52116A5811BA2B31_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, bool ___0_rebuild, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	RuntimeObject* G_B2_0 = NULL;
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* G_B3_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(145, L_0);
		V_0 = L_1;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_2 = __this->___m_CollectionView;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_3 = __this->___m_CollectionView;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_3, NULL);
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_2;
			goto IL_0025;
		}
		G_B1_0 = L_5;
		G_B1_1 = L_2;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_002a;
	}

IL_0025:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_PreviousRefreshedCount = G_B3_0;
		V_1 = 0;
		goto IL_0171;
	}

IL_0036:
	{
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(4, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		int32_t L_8 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = __this->___m_ActiveItems;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_3 = L_11;
		RuntimeObject* L_12 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_12);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13;
		L_13 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_12);
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_13, NULL);
		NullCheck(L_14);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_15;
		L_15 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(48, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_14);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_16;
		L_16 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_17;
		L_17 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_15, L_16, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		V_4 = L_17;
		bool L_18 = ___0_rebuild;
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00ca;
		}
	}
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeObject* L_21 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21);
		int32_t L_22;
		L_22 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21, NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_22) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008e;
	}

IL_008d:
	{
		G_B8_0 = 0;
	}

IL_008e:
	{
		V_6 = (bool)G_B8_0;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00b8;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_24 = __this->___m_CollectionView;
		NullCheck(L_24);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_25;
		L_25 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_24, NULL);
		RuntimeObject* L_26 = V_3;
		RuntimeObject* L_27 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_27);
		int32_t L_28;
		L_28 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_27, NULL);
		NullCheck(L_25);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_25, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_26, L_28);
	}

IL_00b8:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_29 = __this->___m_Pool;
		RuntimeObject* L_30 = V_3;
		NullCheck(L_29);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		goto IL_016d;
	}

IL_00ca:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_31 = __this->___m_CollectionView;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_31, NULL);
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_33 = V_2;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_34 = V_2;
		int32_t L_35;
		L_35 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B15_0 = ((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B15_0 = 0;
	}

IL_00e7:
	{
		V_7 = (bool)G_B15_0;
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_0156;
		}
	}
	{
		bool L_37 = V_0;
		V_8 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_016d;
	}

IL_00fa:
	{
		bool L_39 = V_4;
		if (L_39)
		{
			goto IL_0106;
		}
	}
	{
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(22, __this);
		G_B21_0 = ((int32_t)(L_40));
		goto IL_0107;
	}

IL_0106:
	{
		G_B21_0 = 1;
	}

IL_0107:
	{
		V_9 = (bool)G_B21_0;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_0153;
		}
	}
	{
		RuntimeObject* L_42 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_42);
		int32_t L_43;
		L_43 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_42, NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_0149;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_45 = __this->___m_CollectionView;
		NullCheck(L_45);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_46;
		L_46 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_45, NULL);
		RuntimeObject* L_47 = V_3;
		RuntimeObject* L_48 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48);
		int32_t L_49;
		L_49 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48, NULL);
		NullCheck(L_46);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_46, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_47, L_49);
	}

IL_0149:
	{
		RuntimeObject* L_50 = V_3;
		int32_t L_51 = V_2;
		VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA(__this, L_50, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
	}

IL_0153:
	{
		goto IL_016c;
	}

IL_0156:
	{
		bool L_52 = V_4;
		V_11 = L_52;
		bool L_53 = V_11;
		if (!L_53)
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_54 = V_1;
		int32_t L_55 = L_54;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		VirtualActionInvoker1< int32_t >::Invoke(24, __this, L_55);
	}

IL_016c:
	{
	}

IL_016d:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0171:
	{
		int32_t L_57 = V_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_58 = __this->___m_ActiveItems;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_12 = (bool)((((int32_t)L_57) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_12;
		if (L_60)
		{
			goto IL_0036;
		}
	}
	{
		bool L_61 = ___0_rebuild;
		V_13 = L_61;
		bool L_62 = V_13;
		if (!L_62)
		{
			goto IL_01b5;
		}
	}
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_63 = __this->___m_Pool;
		NullCheck(L_63);
		ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E(L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_64 = __this->___m_ActiveItems;
		NullCheck(L_64);
		List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline(L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_65 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_65);
		VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_65, NULL);
	}

IL_01b5:
	{
		return;
	}
}
// Method Definition Index: 14960
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_UnbindAll_m8C9F1EF389DA95DB7F24D5610567FF4162D8FB0A_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(145, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_006c;
	}

IL_0017:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_ActiveItems;
		NullCheck(L_4);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_5;
		L_5 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				goto IL_0052_1;
			}

IL_0026_1:
			{
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_3 = L_6;
				BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_7 = __this->___m_CollectionView;
				NullCheck(L_7);
				CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_8;
				L_8 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_7, NULL);
				RuntimeObject* L_9 = V_3;
				RuntimeObject* L_10 = V_3;
				NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10);
				int32_t L_11;
				L_11 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10, NULL);
				NullCheck(L_8);
				VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_8, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_9, L_11);
			}

IL_0052_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_12)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_006c;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		return;
	}
}
// Method Definition Index: 14961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_recycledItem, int32_t ___1_newIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B21_0 = 0;
	{
		RuntimeObject* L_0 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_0);
		bool L_1;
		L_1 = ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		int32_t L_3 = ___1_newIndex;
		V_5 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_00c5;
		}
	}
	{
		RuntimeObject* L_5 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_5);
		int32_t L_6;
		L_6 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_5, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_8 = __this->___m_CollectionView;
		NullCheck(L_8);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_9;
		L_9 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_8, NULL);
		RuntimeObject* L_10 = ___0_recycledItem;
		RuntimeObject* L_11 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11);
		int32_t L_12;
		L_12 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11, NULL);
		NullCheck(L_9);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_9, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10, L_12);
	}

IL_0059:
	{
		RuntimeObject* L_13 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_13);
		VirtualActionInvoker1< bool >::Invoke(10, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_13, (bool)1);
		RuntimeObject* L_14 = ___0_recycledItem;
		RuntimeObject* L_15 = __this->___m_DraggedItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_15);
		int32_t L_16;
		L_16 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_15, NULL);
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_14);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_14, L_16, NULL);
		RuntimeObject* L_17 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_17);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18;
		L_18 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_18, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_20;
		L_20 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_19);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(49, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_19, L_20);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_21 = __this->___m_CollectionView;
		NullCheck(L_21);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_22;
		L_22 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_21, NULL);
		RuntimeObject* L_23 = ___0_recycledItem;
		RuntimeObject* L_24 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_24);
		int32_t L_25;
		L_25 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_24, NULL);
		NullCheck(L_22);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15, L_22, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23, L_25);
		goto IL_02f9;
	}

IL_00c5:
	{
		bool L_26 = V_0;
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00db;
		}
	}
	{
		RuntimeObject* L_28 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_28);
		VirtualActionInvoker1< bool >::Invoke(10, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_28, (bool)0);
	}

IL_00db:
	{
		int32_t L_29 = ___1_newIndex;
		int32_t L_30;
		L_30 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_8 = (bool)((((int32_t)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_016a;
		}
	}
	{
		RuntimeObject* L_32 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_32);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33;
		L_33 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_32);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_33, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_35;
		L_35 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_34);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(49, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_34, L_35);
		RuntimeObject* L_36 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_36);
		int32_t L_37;
		L_37 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_36, NULL);
		if ((((int32_t)L_37) < ((int32_t)0)))
		{
			goto IL_012d;
		}
	}
	{
		RuntimeObject* L_38 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_38);
		int32_t L_39;
		L_39 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_38, NULL);
		int32_t L_40;
		L_40 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B10_0 = ((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		goto IL_012e;
	}

IL_012d:
	{
		G_B10_0 = 0;
	}

IL_012e:
	{
		V_9 = (bool)G_B10_0;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_0165;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_42 = __this->___m_CollectionView;
		NullCheck(L_42);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_43;
		L_43 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_42, NULL);
		RuntimeObject* L_44 = ___0_recycledItem;
		RuntimeObject* L_45 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_45);
		int32_t L_46;
		L_46 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_45, NULL);
		NullCheck(L_43);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_43, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_44, L_46);
		RuntimeObject* L_47 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_47);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_47, (-1), NULL);
	}

IL_0165:
	{
		goto IL_02f9;
	}

IL_016a:
	{
		RuntimeObject* L_48 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49;
		L_49 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_48);
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_49, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_51;
		L_51 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_50);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(49, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_50, L_51);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_52 = __this->___m_CollectionView;
		NullCheck(L_52);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_53;
		L_53 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_52, NULL);
		int32_t L_54 = ___1_newIndex;
		NullCheck(L_53);
		int32_t L_55;
		L_55 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, L_53, L_54);
		V_1 = L_55;
		RuntimeObject* L_56 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_56);
		int32_t L_57;
		L_57 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_56, NULL);
		int32_t L_58 = ___1_newIndex;
		if ((!(((uint32_t)L_57) == ((uint32_t)L_58))))
		{
			goto IL_01b6;
		}
	}
	{
		RuntimeObject* L_59 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_59);
		int32_t L_60;
		L_60 = ReusableCollectionItem_get_id_m765F123306544777F8B1E273AFB8A0A1E94C4857_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_59, NULL);
		int32_t L_61 = V_1;
		G_B16_0 = ((((int32_t)L_60) == ((int32_t)L_61))? 1 : 0);
		goto IL_01b7;
	}

IL_01b6:
	{
		G_B16_0 = 0;
	}

IL_01b7:
	{
		V_10 = (bool)G_B16_0;
		bool L_62 = V_10;
		if (!L_62)
		{
			goto IL_01c2;
		}
	}
	{
		goto IL_02f9;
	}

IL_01c2:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_63 = __this->___m_CollectionView;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_63, NULL);
		if (!L_64)
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_65 = ___1_newIndex;
		G_B21_0 = ((((int32_t)((int32_t)(L_65%2))) == ((int32_t)1))? 1 : 0);
		goto IL_01d8;
	}

IL_01d7:
	{
		G_B21_0 = 0;
	}

IL_01d8:
	{
		V_2 = (bool)G_B21_0;
		RuntimeObject* L_66 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_66);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_67;
		L_67 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_66);
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_68 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName;
		bool L_69 = V_2;
		NullCheck(L_67);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_67, L_68, L_69, NULL);
		RuntimeObject* L_70 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_70);
		int32_t L_71;
		L_71 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_70, NULL);
		V_3 = L_71;
		RuntimeObject* L_72 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_72);
		int32_t L_73;
		L_73 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_72, NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_73) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_11;
		if (!L_74)
		{
			goto IL_0235;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_75 = __this->___m_CollectionView;
		NullCheck(L_75);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_76;
		L_76 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_75, NULL);
		RuntimeObject* L_77 = ___0_recycledItem;
		RuntimeObject* L_78 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_78);
		int32_t L_79;
		L_79 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_78, NULL);
		NullCheck(L_76);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_76, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_77, L_79);
	}

IL_0235:
	{
		RuntimeObject* L_80 = ___0_recycledItem;
		int32_t L_81 = ___1_newIndex;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_80);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_80, L_81, NULL);
		RuntimeObject* L_82 = ___0_recycledItem;
		int32_t L_83 = V_1;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_82);
		ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_82, L_83, NULL);
		int32_t L_84 = ___1_newIndex;
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		int32_t L_85;
		L_85 = VirtualFuncInvoker0< int32_t >::Invoke(4, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_84, L_85));
		int32_t L_86 = V_4;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_87 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_87);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_88;
		L_88 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_87);
		NullCheck(L_88);
		int32_t L_89;
		L_89 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_88, NULL);
		V_12 = (bool)((((int32_t)((((int32_t)L_86) < ((int32_t)L_89))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_12;
		if (!L_90)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject* L_91 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_91);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_92;
		L_92 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_91);
		NullCheck(L_92);
		VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E(L_92, NULL);
		goto IL_02d3;
	}

IL_028b:
	{
		int32_t L_93 = V_4;
		V_13 = (bool)((((int32_t)((((int32_t)L_93) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_94 = V_13;
		if (!L_94)
		{
			goto IL_02c0;
		}
	}
	{
		RuntimeObject* L_95 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_95);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_96;
		L_96 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_95);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_97 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_97);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_98;
		L_98 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_97);
		int32_t L_99 = V_4;
		NullCheck(L_98);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_100;
		L_100 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_98, L_99, NULL);
		NullCheck(L_96);
		VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF(L_96, L_100, NULL);
		goto IL_02d3;
	}

IL_02c0:
	{
		RuntimeObject* L_101 = ___0_recycledItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_101);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_102;
		L_102 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_101);
		NullCheck(L_102);
		VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511(L_102, NULL);
	}

IL_02d3:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_103 = __this->___m_CollectionView;
		NullCheck(L_103);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_104;
		L_104 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_103, NULL);
		RuntimeObject* L_105 = ___0_recycledItem;
		int32_t L_106 = ___1_newIndex;
		NullCheck(L_104);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_104, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_105, L_106);
		RuntimeObject* L_107 = ___0_recycledItem;
		int32_t L_108 = V_3;
		VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC(__this, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_107, L_108, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_02f9:
	{
		return;
	}
}
// Method Definition Index: 14962
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerticalVirtualizationController_1_ShouldDeferScrollToItem_m096BC01957D00BC210CFDAA3D25EB29B7BAFBF6C_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_0 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1;
		L_1 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0);
		NullCheck(L_1);
		LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE* L_2;
		L_2 = VisualElement_get_layoutNode_mDEB89DEE452812FE70D90C54203C03DC216A66CB(L_1, NULL);
		bool L_3;
		L_3 = LayoutNode_get_IsDirty_m27F22B3DF753A0842461A7F06E69EC74FF0C3A0F(L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___0_index;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_6), L_5, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		__this->___m_DeferredScrollToItemIndex = L_6;
		V_1 = (bool)1;
		goto IL_002f;
	}

IL_002b:
	{
		V_1 = (bool)0;
		goto IL_002f;
	}

IL_002f:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 14963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_ScheduleDeferredScrollToItem_m21627DE0D64BD7819DDD3DBCE349C45302E1297D_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualElementScheduler_tA68650FA9218398E77265748741B091638336FD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___m_DeferredScrollToItemIndex);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_0, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_005a;
	}

IL_0015:
	{
		RuntimeObject* L_3 = __this->___m_ScheduleDeferredScrollToItem;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_5 = __this->___m_CollectionView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		RuntimeObject* L_6;
		L_6 = VisualElement_get_schedule_m2BFE6967ED82371ACE1CD1FC32B8D8B93646ED76((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = __this->___m_PerformDeferredScrollToItem;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(1, IVisualElementScheduler_tA68650FA9218398E77265748741B091638336FD8_il2cpp_TypeInfo_var, L_6, L_7);
		__this->___m_ScheduleDeferredScrollToItem = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScheduleDeferredScrollToItem), (void*)L_8);
		goto IL_005a;
	}

IL_0040:
	{
		RuntimeObject* L_9 = __this->___m_ScheduleDeferredScrollToItem;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(2, IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_10 = __this->___m_ScheduleDeferredScrollToItem;
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(1, IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F_il2cpp_TypeInfo_var, L_10);
	}

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 14964
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_PerformDeferredScrollToItem_mE8333640310371D92DC3336F0D38AD70E990B4F3_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___m_DeferredScrollToItemIndex);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_0, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___m_DeferredScrollToItemIndex);
		int32_t L_4;
		L_4 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_3, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		V_1 = L_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___m_DeferredScrollToItemIndex);
		il2cpp_codegen_initobj(L_5, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		int32_t L_6 = V_1;
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		VirtualActionInvoker1< int32_t >::Invoke(8, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, L_6);
	}

IL_0032:
	{
		return;
	}
}
// Method Definition Index: 14965
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnFocusIn_mE0AC91A1D940F6F8D54DE726070258A963BEA291_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_leafTarget, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* V_4 = NULL;
	bool V_5 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_leafTarget;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_1 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1);
		V_0 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00c4;
	}

IL_0018:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = __this->___m_LastFocusedElementTreeChildIndexes;
		NullCheck(L_4);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_4, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_5 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6;
		L_6 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_leafTarget;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___m_LastFocusedElementTreeChildIndexes;
		NullCheck(L_6);
		bool L_9;
		L_9 = VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59(L_6, L_7, L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00bb;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_11 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = __this->___m_LastFocusedElementTreeChildIndexes;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_13, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_12);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_12, L_14, NULL);
		V_2 = L_15;
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{
				{
					RuntimeObject* L_18 = V_3;
					if (!L_18)
					{
						goto IL_00aa;
					}
				}
				{
					RuntimeObject* L_19 = V_3;
					NullCheck((RuntimeObject*)L_19);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				}

IL_00aa:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0096_1;
			}

IL_006c_1:
			{
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_21;
				L_21 = InterfaceFuncInvoker0< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(0, IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var, L_20);
				V_4 = L_21;
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_22 = V_4;
				NullCheck(L_22);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23;
				L_23 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_22);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_2;
				V_5 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_24))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0095_1;
				}
			}
			{
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_26 = V_4;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_26, NULL);
				__this->___m_LastFocusedElementIndex = L_27;
				goto IL_009e_1;
			}

IL_0095_1:
			{
			}

IL_0096_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck((RuntimeObject*)L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				if (L_29)
				{
					goto IL_006c_1;
				}
			}

IL_009e_1:
			{
				goto IL_00ab;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = __this->___m_LastFocusedElementTreeChildIndexes;
		NullCheck(L_30);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_30, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		goto IL_00c4;
	}

IL_00bb:
	{
		__this->___m_LastFocusedElementIndex = (-1);
	}

IL_00c4:
	{
		return;
	}
}
// Method Definition Index: 14966
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnFocusOut_m7031527BDF62EDA5C41B9806261D51A43AC84C87_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_willFocus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_willFocus;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_willFocus;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_2 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2);
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_LastFocusedElementTreeChildIndexes;
		NullCheck(L_5);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_5, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		__this->___m_LastFocusedElementIndex = (-1);
	}

IL_0031:
	{
		return;
	}
}
// Method Definition Index: 14967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_recycledItem, int32_t ___1_previousIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B5_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B4_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B10_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->___m_LastFocusedElementIndex;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0081;
	}

IL_0010:
	{
		int32_t L_2 = __this->___m_LastFocusedElementIndex;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = ___0_recycledItem;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_6 = ___0_recycledItem;
		NullCheck(L_6);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7;
		L_7 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_6);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___m_LastFocusedElementTreeChildIndexes;
		NullCheck(L_7);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9;
		L_9 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_7, L_8, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = L_9;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_0039;
		}
		G_B4_0 = L_10;
	}
	{
		goto IL_003f;
	}

IL_0039:
	{
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B5_0);
		VirtualActionInvoker0::Invoke(19, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B5_0);
	}

IL_003f:
	{
		goto IL_0081;
	}

IL_0041:
	{
		int32_t L_11 = __this->___m_LastFocusedElementIndex;
		int32_t L_12 = ___1_previousIndex;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_14 = ___0_recycledItem;
		NullCheck(L_14);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_14);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___m_LastFocusedElementTreeChildIndexes;
		NullCheck(L_15);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17;
		L_17 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_15, L_16, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = L_17;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_0068;
		}
		G_B9_0 = L_18;
	}
	{
		goto IL_006e;
	}

IL_0068:
	{
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B10_0);
		VirtualActionInvoker0::Invoke(20, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B10_0);
	}

IL_006e:
	{
		goto IL_0081;
	}

IL_0070:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_19 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_19);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(135, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_19);
		NullCheck((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_20);
		VirtualActionInvoker0::Invoke(19, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_20);
	}

IL_0081:
	{
		return;
	}
}
// Method Definition Index: 14968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_12 = NULL;
	bool V_13 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_16 = NULL;
	bool V_17 = false;
	int32_t G_B3_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B6_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B5_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0039;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_2 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck(L_2);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(30, IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var, L_4);
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(13, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		float L_7 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		V_0 = L_7;
		G_B3_0 = ((((int32_t)((!(((float)L_7) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 1;
	}

IL_003a:
	{
		V_5 = (bool)G_B3_0;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = __this->___m_EmptyRows;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = L_9;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_004d;
		}
		G_B5_0 = L_10;
	}
	{
		goto IL_0053;
	}

IL_004d:
	{
		NullCheck(G_B6_0);
		VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(G_B6_0, NULL);
	}

IL_0053:
	{
		goto IL_01cf;
	}

IL_0058:
	{
		RuntimeObject* L_11;
		L_11 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_6 = (bool)((((RuntimeObject*)(RuntimeObject*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01cf;
	}

IL_0071:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = __this->___m_EmptyRows;
		V_7 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_009e;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_15, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = L_15;
		NullCheck(L_16);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17;
		L_17 = VisualElement_get_classList_mF29F87BE5A1BFC82854AD0D6355A713D5AC517C1(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_18 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___backgroundFillUssClassName;
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, L_18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___m_EmptyRows = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EmptyRows), (void*)L_16);
	}

IL_009e:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = __this->___m_EmptyRows;
		NullCheck(L_19);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(L_19, NULL);
		V_8 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_20) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_00c9;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_22 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		NullCheck(L_22);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23;
		L_23 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_22, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = __this->___m_EmptyRows;
		NullCheck(L_23);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_23, L_24, NULL);
	}

IL_00c9:
	{
		NullCheck((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		float L_25;
		L_25 = VirtualFuncInvoker1< float, int32_t >::Invoke(12, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, (-1));
		V_1 = L_25;
		float L_26 = V_0;
		float L_27 = V_1;
		int32_t L_28;
		L_28 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_26/L_27)), NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = __this->___m_EmptyRows;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_30, NULL);
		V_9 = (bool)((((int32_t)L_29) > ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_33 = V_2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_34 = __this->___m_EmptyRows;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_34, NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_33, L_35));
		V_11 = 0;
		goto IL_0139;
	}

IL_0105:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_36, NULL);
		V_12 = L_36;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_37 = V_12;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_37, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_39;
		L_39 = StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB((0.0f), NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(57, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_38, L_39);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = __this->___m_EmptyRows;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_41 = V_12;
		NullCheck(L_40);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_40, L_41, NULL);
		int32_t L_42 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0139:
	{
		int32_t L_43 = V_11;
		int32_t L_44 = V_10;
		V_13 = (bool)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0);
		bool L_45 = V_13;
		if (L_45)
		{
			goto IL_0105;
		}
	}
	{
	}

IL_0146:
	{
		RuntimeObject* L_46;
		L_46 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		RuntimeObject* L_47 = L_46;
		if (L_47)
		{
			G_B21_0 = ((RuntimeObject*)(L_47));
			goto IL_0158;
		}
		G_B20_0 = ((RuntimeObject*)(L_47));
	}
	{
		G_B22_0 = (-1);
		goto IL_015d;
	}

IL_0158:
	{
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)G_B21_0);
		int32_t L_48;
		L_48 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)G_B21_0, NULL);
		G_B22_0 = L_48;
	}

IL_015d:
	{
		V_3 = G_B22_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = __this->___m_EmptyRows;
		NullCheck(L_49);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_50;
		L_50 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_49, NULL);
		V_14 = L_50;
		int32_t L_51;
		L_51 = Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5((&V_14), NULL);
		V_4 = L_51;
		V_15 = 0;
		goto IL_01c3;
	}

IL_0179:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = __this->___m_EmptyRows;
		NullCheck(L_52);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_53;
		L_53 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_52, NULL);
		V_14 = L_53;
		int32_t L_54 = V_15;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55;
		L_55 = Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467((&V_14), L_54, NULL);
		V_16 = L_55;
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_57 = V_16;
		NullCheck(L_57);
		RuntimeObject* L_58;
		L_58 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_57, NULL);
		float L_59 = V_1;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_60;
		L_60 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_59, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(63, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_58, L_60);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61 = V_16;
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_62 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName;
		int32_t L_63 = V_3;
		NullCheck(L_61);
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_61, L_62, (bool)((((int32_t)((int32_t)(L_63%2))) == ((int32_t)1))? 1 : 0), NULL);
		int32_t L_64 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_01c3:
	{
		int32_t L_65 = V_15;
		int32_t L_66 = V_4;
		V_17 = (bool)((((int32_t)L_65) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_17;
		if (L_67)
		{
			goto IL_0179;
		}
	}

IL_01cf:
	{
		return;
	}
}
// Method Definition Index: 14969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_StartDragItem_m90D34ED5F87156BF50817976D0FE5784A22A0CCC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_0 = ___0_item;
		__this->___m_DraggedItem = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DraggedItem), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = __this->___m_ActiveItems;
		RuntimeObject* L_2 = __this->___m_DraggedItem;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_3;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_ActiveItems;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(23, __this, L_6, L_7);
		V_1 = L_8;
		RuntimeObject* L_9 = V_1;
		RuntimeObject* L_10 = __this->___m_DraggedItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10);
		int32_t L_11;
		L_11 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10, NULL);
		VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA(__this, L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
// Method Definition Index: 14970
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_EndDrag_mE4C2F065B00C1FA3E9A6CBF083672FF7B734CF4A_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_dropIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		int32_t L_1 = ___0_dropIndex;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_2;
		L_2 = ListViewDraggerExtension_GetRecycledItemFromIndex_m2DCBCAD63977E19CCB2888783463D3CCB7956F5C(L_0, L_1, NULL);
		V_0 = L_2;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = V_0;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_ActiveItems;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		G_B3_0 = L_5;
		goto IL_002f;
	}

IL_001e:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_6 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_7 = V_0;
		NullCheck(L_7);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_7);
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_6);
		int32_t L_9;
		L_9 = VisualElement_IndexOf_m1CC000F2192D5D561AE87B2EC3AB312BD0D714AE((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_6, L_8, NULL);
		G_B3_0 = L_9;
	}

IL_002f:
	{
		V_1 = G_B3_0;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_10 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = __this->___m_DraggedItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_12);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13;
		L_13 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_12);
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_10);
		VisualElement_Insert_m95ACF6FC7BCF788C955714E8DADF07FACE5C0031((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_10, L_11, L_13, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = __this->___m_ActiveItems;
		int32_t L_15 = V_1;
		RuntimeObject* L_16 = __this->___m_DraggedItem;
		NullCheck(L_14);
		List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(L_14, L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		V_2 = 0;
		goto IL_00a3;
	}

IL_0064:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = __this->___m_ActiveItems;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_3 = L_19;
		RuntimeObject* L_20 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_20);
		bool L_21;
		L_21 = ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_20, NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_23 = V_3;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23, (-1), NULL);
		int32_t L_24 = V_2;
		VirtualActionInvoker1< int32_t >::Invoke(24, __this, L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_009e:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a3:
	{
		int32_t L_27 = V_2;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_28 = __this->___m_ActiveItems;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_31 = ___0_dropIndex;
		int32_t L_32;
		L_32 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), NULL);
		RuntimeObject* L_34 = __this->___m_DraggedItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_34);
		int32_t L_35;
		L_35 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_34, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_33) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeObject* L_37;
		L_37 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_0119;
		}
	}
	{
		RuntimeObject* L_39;
		L_39 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_39);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40;
		L_40 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_39);
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_40, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_42;
		L_42 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		NullCheck(L_41);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(49, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_41, L_42);
	}

IL_0119:
	{
		RuntimeObject* L_43 = __this->___m_DraggedItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_43);
		int32_t L_44;
		L_44 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_43, NULL);
		int32_t L_45 = ___0_dropIndex;
		V_8 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0174;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_47 = __this->___m_CollectionView;
		NullCheck(L_47);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_48;
		L_48 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_47, NULL);
		RuntimeObject* L_49 = __this->___m_DraggedItem;
		RuntimeObject* L_50 = __this->___m_DraggedItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_50);
		int32_t L_51;
		L_51 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_50, NULL);
		NullCheck(L_48);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_48, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_49, L_51);
		RuntimeObject* L_52 = __this->___m_DraggedItem;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_52);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_52, (-1), NULL);
		goto IL_01a0;
	}

IL_0174:
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_53 = V_0;
		V_9 = (bool)((!(((RuntimeObject*)(ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01a0;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_55 = __this->___m_CollectionView;
		NullCheck(L_55);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_56;
		L_56 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_55, NULL);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_57 = V_0;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_58, NULL);
		NullCheck(L_56);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_56, L_57, L_59);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_60 = V_0;
		NullCheck(L_60);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline(L_60, (-1), NULL);
	}

IL_01a0:
	{
	}

IL_01a1:
	{
		RuntimeObject** L_61 = (RuntimeObject**)(&__this->___m_DraggedItem);
		il2cpp_codegen_initobj(L_61, sizeof(RuntimeObject*));
		return;
	}
}
// Method Definition Index: 14971
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_GetOrMakeItemAtIndex_m73EFFD0367510D9487186D58ECBBFEC9BC9C70AC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_activeItemIndex, int32_t ___1_scrollViewIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = __this->___m_Pool;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_2);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_2);
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_5 = __this->___m_CollectionView;
		NullCheck(L_5);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_6;
		L_6 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_5, NULL);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(14, L_6, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
		RuntimeObject* L_8 = V_0;
		Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* L_9 = (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09*)il2cpp_codegen_object_new(Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		Action_1__ctor_mC0F49DD2F8ED1E95FA4D285BFC8AB8185ACAEA4D(L_9, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 44)), NULL);
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8);
		ReusableCollectionItem_add_onDestroy_m409E356FF514F61FFD076178469E829C495DAE01((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8, L_9, NULL);
	}

IL_0050:
	{
		RuntimeObject* L_10 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10);
		VirtualActionInvoker0::Invoke(6, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10);
		int32_t L_11 = ___0_activeItemIndex;
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13 = __this->___m_ActiveItems;
		RuntimeObject* L_14 = V_0;
		NullCheck(L_13);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		goto IL_0085;
	}

IL_0075:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_15 = __this->___m_ActiveItems;
		int32_t L_16 = ___0_activeItemIndex;
		RuntimeObject* L_17 = V_0;
		NullCheck(L_15);
		List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(L_15, L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0085:
	{
		int32_t L_18 = ___1_scrollViewIndex;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)(-1)))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00a8;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_20 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		RuntimeObject* L_21 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_22;
		L_22 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21);
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_20);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_20, L_22, NULL);
		goto IL_00c2;
	}

IL_00a8:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_23 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		int32_t L_24 = ___1_scrollViewIndex;
		RuntimeObject* L_25 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26;
		L_26 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25);
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23);
		VisualElement_Insert_m95ACF6FC7BCF788C955714E8DADF07FACE5C0031((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23, L_24, L_26, NULL);
	}

IL_00c2:
	{
		RuntimeObject* L_27 = V_0;
		V_4 = L_27;
		goto IL_00c7;
	}

IL_00c7:
	{
		RuntimeObject* L_28 = V_4;
		return L_28;
	}
}
// Method Definition Index: 14972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_ReleaseItem_m1246B549EF5072DDD898308480867E71EEC27874_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_activeItemsIndex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		int32_t L_1 = ___0_activeItemsIndex;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3);
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_6 = __this->___m_CollectionView;
		NullCheck(L_6);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_7;
		L_7 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_6, NULL);
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = V_0;
		NullCheck((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_9);
		int32_t L_10;
		L_10 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_9, NULL);
		NullCheck(L_7);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(17, L_7, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8, L_10);
	}

IL_0047:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_11 = __this->___m_Pool;
		RuntimeObject* L_12 = V_0;
		NullCheck(L_11);
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13 = __this->___m_ActiveItems;
		RuntimeObject* L_14 = V_0;
		NullCheck(L_13);
		bool L_15;
		L_15 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return;
	}
}
// Method Definition Index: 14973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnDestroyItem_m151419DCA568852879B1E73E241819CAD834D85F_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_1;
		L_1 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_0, NULL);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_2 = ___0_item;
		NullCheck(L_1);
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(18, L_1, L_2);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = ___0_item;
		Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* L_4 = (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09*)il2cpp_codegen_object_new(Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		Action_1__ctor_mC0F49DD2F8ED1E95FA4D285BFC8AB8185ACAEA4D(L_4, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 44)), NULL);
		NullCheck(L_3);
		ReusableCollectionItem_remove_onDestroy_mF9E3F8DCD03F5804E8A886C5D06AA8F945E43097(L_3, L_4, NULL);
		return;
	}
}
// Method Definition Index: 14974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		NullCheck(L_0);
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_1;
		L_1 = BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline(L_0, NULL);
		V_0 = ((ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)IsInstClass((RuntimeObject*)L_1, ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var));
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4_inline(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_6 = V_0;
		NullCheck(L_6);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_7;
		L_7 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_7, NULL);
		V_2 = L_8;
		goto IL_0034;
	}

IL_0030:
	{
		V_2 = (-1);
		goto IL_0034;
	}

IL_0034:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 20630
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementScheduledItem_1__ctor_m2D2983F18BB4C00D47151DC5F5AAF5C6F55124AA_gshared (VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_handler, Il2CppFullySharedGenericAny ___1_upEvent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_handler;
		BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68((BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A*)__this, L_0, NULL);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_upEvent : &___1_upEvent), SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_1, SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 134328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidAsyncOperationWithData_1__ctor_mD6D3DB440FFA90606C60C0E25AA3AD1922605611_gshared (VoidAsyncOperationWithData_1_t59BA201AC2849A9BB8AC8A629CE8DB5206D3BB13* __this, bool ___0_runContinuationsAsynchronously, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, bool ___2_pooled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1__ctor_mDAE57CDDED83C3369618689CFB5BBE1F50B57CD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_runContinuationsAsynchronously;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		bool L_2 = ___2_pooled;
		AsyncOperation_1__ctor_mDAE57CDDED83C3369618689CFB5BBE1F50B57CD2((AsyncOperation_1_t6D50D23D871DE8AAAD8EEE2A36DB1231E3725908*)__this, L_0, L_1, L_2, AsyncOperation_1__ctor_mDAE57CDDED83C3369618689CFB5BBE1F50B57CD2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 134329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidAsyncOperationWithData_1_get_Item_m8777B128DFDB52FD32189DD638C1739FA9500E8B_gshared (VoidAsyncOperationWithData_1_t59BA201AC2849A9BB8AC8A629CE8DB5206D3BB13* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695);
		return;
	}
}
// Method Definition Index: 134330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidAsyncOperationWithData_1_set_Item_m3E0238FFDCDF8DE05B26B5F67113A142B8CA727C_gshared (VoidAsyncOperationWithData_1_t59BA201AC2849A9BB8AC8A629CE8DB5206D3BB13* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_TData_tCD3A4ED66BED86AEB11FD7C8C93393FB23ECE695);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 57315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:18>
		int32_t L_0 = __this->___U3CselectedComponentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 57316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponent_mB98032B7495A08D17A106619BBAD520939E84376_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:18>
		int32_t L_0 = ___0_value;
		__this->___U3CselectedComponentU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 57317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* VolumeDebugSettings_1_get_selectedCamera_m5432206F52AB501696957007D6D92D731B247131_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B3_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:21>
		int32_t L_0;
		L_0 = VolumeDebugSettings_1_get_selectedCameraIndex_m83C93DE33689D5F632215A910F52A4907A8ED903(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_2;
		L_2 = VolumeDebugSettings_1_get_selectedCameraIndex_m83C93DE33689D5F632215A910F52A4907A8ED903(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F(L_1, L_2, Enumerable_ElementAt_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m7708E25BE52E51D4B32FCEA664EA289FB6ADA63F_RuntimeMethod_var);
		G_B3_0 = L_3;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)(NULL));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// Method Definition Index: 57318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedCameraIndex_m83C93DE33689D5F632215A910F52A4907A8ED903_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:33>
		RuntimeObject* L_0;
		L_0 = VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_1;
		L_1 = Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8(L_0, Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:34>
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0023;
	}

IL_0014:
	{
		int32_t L_3 = __this->___m_SelectedCameraIndex;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline(L_3, 0, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		G_B3_0 = L_5;
	}

IL_0023:
	{
		V_1 = G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:35>
		int32_t L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 57319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedCameraIndex_m14F0D5CE530F72FF861DC417B2902AD2562327F1_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:38>
		RuntimeObject* L_0;
		L_0 = VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_1;
		L_1 = Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8(L_0, Enumerable_Count_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0BA1E916B39F8F6CBAB6C19745272C34C54391E8_RuntimeMethod_var);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:39>
		int32_t L_2 = ___0_value;
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline(L_2, 0, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
		__this->___m_SelectedCameraIndex = L_4;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:40>
		return;
	}
}
// Method Definition Index: 57320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeDebugSettings_1_get_cameras_m1BE509AA60A6291882346AA84175AEF00279E7FF_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* V_1 = NULL;
	int32_t V_2 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:51>
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = __this->___m_Cameras;
		NullCheck(L_0);
		List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_inline(L_0, List_1_Clear_mFA6D8529DA219A26E2A3547C04EA59BC2F9ED69D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:62>
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_1 = __this->___m_CamerasArray;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_2 = __this->___m_CamerasArray;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_allCamerasCount_m7B9CAA9E8F2BC5587942A4CCBF4D6CA1FFD01BDC(NULL);
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:64>
		int32_t L_5;
		L_5 = Camera_get_allCamerasCount_m7B9CAA9E8F2BC5587942A4CCBF4D6CA1FFD01BDC(NULL);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_6 = (CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B*)(CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B*)SZArrayNew(CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___m_CamerasArray = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CamerasArray), (void*)L_6);
	}

IL_0040:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:67>
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_7 = __this->___m_CamerasArray;
		int32_t L_8;
		L_8 = Camera_GetAllCameras_m55D302710121EEBC17D2F6EE4AE975C37ECC53F4(L_7, NULL);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:69>
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_9 = __this->___m_CamerasArray;
		V_1 = L_9;
		V_2 = 0;
		goto IL_00ad;
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:69>
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:71>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:72>
		goto IL_00a9;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:74>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_17, NULL);
		if ((((int32_t)L_18) == ((int32_t)4)))
		{
			goto IL_0084;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_19, NULL);
		G_B11_0 = ((((int32_t)((((int32_t)L_20) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B11_0 = 0;
	}

IL_0085:
	{
		V_5 = (bool)G_B11_0;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:76>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = V_3;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_22);
		bool L_23;
		L_23 = Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_22, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00a7;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:77>
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_25 = __this->___m_Cameras;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = V_3;
		NullCheck(L_25);
		List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline(L_25, L_26, List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
	}

IL_00a7:
	{
	}

IL_00a8:
	{
	}

IL_00a9:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00ad:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:69>
		int32_t L_28 = V_2;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_29 = V_1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:81>
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_30 = __this->___m_Cameras;
		V_8 = (RuntimeObject*)L_30;
		goto IL_00bd;
	}

IL_00bd:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:82>
		RuntimeObject* L_31 = V_8;
		return L_31;
	}
}
// Method Definition Index: 57324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* G_B3_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:97>
		int32_t L_0;
		L_0 = VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((Type_t*)(NULL));
		goto IL_0024;
	}

IL_000c:
	{
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_1;
		L_1 = VolumeDebugSettings_1_get_volumeComponentsPathAndType_m3C883DD8FD865B32ACC2A42B8393BE0FF35F4EDB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_2;
		L_2 = VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		ValueTuple_2_tB97F43966F527B2125B7A49F02F05E9A07A60494 L_3;
		L_3 = List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286(L_1, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), List_1_get_Item_mDF487B1FB318EBF81C972FCCD0AECA6B9B6E9286_RuntimeMethod_var);
		Type_t* L_4 = L_3.___Item2;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// Method Definition Index: 57325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponentType_m711E0AD930A30258F4F625F6FA7BF99BD839A865_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8* L_0 = (U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		U3CU3Ec__DisplayClass22_0__ctor_m2548D98AB5764A256005A7CDF6B5C31B09160C54(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8* L_1 = V_0;
		Type_t* L_2 = ___0_value;
		NullCheck(L_1);
		L_1->___value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___value), (void*)L_2);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:100>
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_3;
		L_3 = VolumeDebugSettings_1_get_volumeComponentsPathAndType_m3C883DD8FD865B32ACC2A42B8393BE0FF35F4EDB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		U3CU3Ec__DisplayClass22_0_t5475EE0C17E92C5B180BAC7BE4F7E5EE6114E9D8* L_4 = V_0;
		Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7* L_5 = (Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7*)il2cpp_codegen_object_new(Predicate_1_t291C0D10D456B82FC6814D0B6013EA6CE933DFE7_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2A873182717A1B746A08E8A60B68D63ACFD144BF(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4(L_3, L_5, List_1_FindIndex_m6453765ACDCCF1261A26796F9EB601DDE15077F4_RuntimeMethod_var);
		V_1 = L_6;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:101>
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:102>
		int32_t L_9 = V_1;
		VolumeDebugSettings_1_set_selectedComponent_mB98032B7495A08D17A106619BBAD520939E84376_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:103>
		return;
	}
}
// Method Definition Index: 57326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* VolumeDebugSettings_1_get_volumeComponentsPathAndType_m3C883DD8FD865B32ACC2A42B8393BE0FF35F4EDB_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:107>
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_0;
		L_0 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		il2cpp_codegen_runtime_class_init_inline(GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = GraphicsSettings_get_currentRenderPipelineAssetType_m72CAAF0AAB3BD48DDAEF0087B12ACDDD6B007404(NULL);
		NullCheck(L_0);
		List_1_t7914A60037E52C4BCACDEAA85272BE39302B7E6C* L_2;
		L_2 = VolumeManager_GetVolumeComponentsForDisplay_m5D246FCE6526D6F83485745E8F4CFC694AFECDE8(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 57327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* VolumeDebugSettings_1_get_targetRenderPipeline_m71524CA9C6F65913D2617BE362A3BCBCC00D15EA_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:113>
		Type_t* L_0 = __this->___U3CtargetRenderPipelineU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 57328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* ___0_component, FieldInfo_t* ___1_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:117>
		FieldInfo_t* L_0 = ___1_field;
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_1 = ___0_component;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(27, L_0, (RuntimeObject*)L_1);
		V_0 = ((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)CastclassClass((RuntimeObject*)L_2, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72_il2cpp_TypeInfo_var));
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:118>
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 57329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m79C8104EA0CBF5EBE6D44332BE1E872829389E71_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, FieldInfo_t* ___0_field, const RuntimeMethod* method) 
{
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* V_0 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_1 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* G_B3_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:122>
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_0;
		L_0 = VirtualFuncInvoker0< VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* >::Invoke(19, __this);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:123>
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_2 = V_0;
		Type_t* L_3;
		L_3 = VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_2);
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_4;
		L_4 = VolumeStack_GetComponent_mC7A2CE27A8A6F6A6A4B4B6EF14E190085A343844(L_2, L_3, NULL);
		FieldInfo_t* L_5 = ___0_field;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_6;
		L_6 = VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A(__this, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		G_B3_0 = L_6;
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = ((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)(NULL));
	}

IL_0021:
	{
		V_1 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:124>
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 57330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* VolumeDebugSettings_1_GetParameter_m585FA113A42B26FBDE02AB9755B45545C30394B9_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, FieldInfo_t* ___1_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_0 = NULL;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_2 = NULL;
	bool V_3 = false;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_4 = NULL;
	bool V_5 = false;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B3_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:128>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_0 = ___0_volume;
		NullCheck(L_0);
		bool L_1;
		L_1 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_0, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_2 = ___0_volume;
		NullCheck(L_2);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_3 = L_2->___sharedProfile;
		G_B3_0 = L_3;
		goto IL_0017;
	}

IL_0011:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_4 = ___0_volume;
		NullCheck(L_4);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_5;
		L_5 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:129>
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_6 = V_0;
		Type_t* L_7;
		L_7 = VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_6);
		bool L_8;
		L_8 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(L_6, L_7, (&V_1), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:130>
		V_4 = (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
		goto IL_0054;
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:131>
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_10 = V_1;
		FieldInfo_t* L_11 = ___1_field;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_12;
		L_12 = VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A(__this, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_2 = L_12;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:132>
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_13 = V_2;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(5, L_13);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:133>
		V_4 = (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)NULL;
		goto IL_0054;
	}

IL_004f:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:134>
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_16 = V_2;
		V_4 = L_16;
		goto IL_0054;
	}

IL_0054:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:135>
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_17 = V_4;
		return L_17;
	}
}
// Method Definition Index: 57331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_ComputeWeight_m2A2083BB02163D67BCCF7318FA0D20CD39B1211F_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_triggerPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_0 = NULL;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_1 = NULL;
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_10 = NULL;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_13 = NULL;
	int32_t V_14 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_15 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	bool V_18 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:140>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_0 = ___0_volume;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:140>
		V_4 = (0.0f);
		goto IL_0197;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:142>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_3 = ___0_volume;
		NullCheck(L_3);
		bool L_4;
		L_4 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_3, NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_5 = ___0_volume;
		NullCheck(L_5);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_6 = L_5->___sharedProfile;
		G_B5_0 = L_6;
		goto IL_002e;
	}

IL_0028:
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_7 = ___0_volume;
		NullCheck(L_7);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_8;
		L_8 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_7, NULL);
		G_B5_0 = L_8;
	}

IL_002e:
	{
		V_0 = G_B5_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:144>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_9 = ___0_volume;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_10, NULL);
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:144>
		V_4 = (0.0f);
		goto IL_0197;
	}

IL_004f:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:145>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_13 = ___0_volume;
		NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_13);
		bool L_14;
		L_14 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_13, NULL);
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_0072;
		}
	}
	{
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_17 = ___0_volume;
		NullCheck(L_17);
		float L_18 = L_17->___weight;
		G_B11_0 = ((((int32_t)((!(((float)L_18) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 1;
	}

IL_0073:
	{
		V_6 = (bool)G_B11_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0085;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:145>
		V_4 = (0.0f);
		goto IL_0197;
	}

IL_0085:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:146>
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_20 = V_0;
		Type_t* L_21;
		L_21 = VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_20);
		bool L_22;
		L_22 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(L_20, L_21, (&V_1), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00a8;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:146>
		V_4 = (0.0f);
		goto IL_0197;
	}

IL_00a8:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:147>
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_24 = V_1;
		NullCheck(L_24);
		bool L_25 = L_24->___active;
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_00c3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:147>
		V_4 = (0.0f);
		goto IL_0197;
	}

IL_00c3:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:149>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_27 = ___0_volume;
		NullCheck(L_27);
		float L_28 = L_27->___weight;
		float L_29;
		L_29 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_28, NULL);
		V_2 = L_29;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:150>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_30 = ___0_volume;
		NullCheck(L_30);
		bool L_31;
		L_31 = Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline(L_30, NULL);
		V_9 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0192;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:152>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_33 = ___0_volume;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_33);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_34;
		L_34 = Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_33, Component_GetComponents_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m92CCBDF9F73958063400986CE7C8FB674AE0EA4C_RuntimeMethod_var);
		V_10 = L_34;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:155>
		V_11 = (std::numeric_limits<float>::infinity());
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:156>
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_35 = V_10;
		V_13 = L_35;
		V_14 = 0;
		goto IL_0149;
	}

IL_00fb:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:156>
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_36 = V_13;
		int32_t L_37 = V_14;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_15 = L_39;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:158>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_40 = V_15;
		NullCheck(L_40);
		bool L_41;
		L_41 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_40, NULL);
		V_18 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0115;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:159>
		goto IL_0143;
	}

IL_0115:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:161>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_43 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___1_triggerPos;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB(L_43, L_44, NULL);
		V_16 = L_45;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:162>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = ___1_triggerPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_47, NULL);
		V_19 = L_48;
		float L_49;
		L_49 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_19), NULL);
		V_17 = L_49;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:164>
		float L_50 = V_17;
		float L_51 = V_11;
		V_20 = (bool)((((float)L_50) < ((float)L_51))? 1 : 0);
		bool L_52 = V_20;
		if (!L_52)
		{
			goto IL_0142;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:165>
		float L_53 = V_17;
		V_11 = L_53;
	}

IL_0142:
	{
	}

IL_0143:
	{
		int32_t L_54 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0149:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:156>
		int32_t L_55 = V_14;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_56 = V_13;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_00fb;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:167>
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_57 = ___0_volume;
		NullCheck(L_57);
		float L_58 = L_57->___blendDistance;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_59 = ___0_volume;
		NullCheck(L_59);
		float L_60 = L_59->___blendDistance;
		V_12 = ((float)il2cpp_codegen_multiply(L_58, L_60));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:168>
		float L_61 = V_11;
		float L_62 = V_12;
		V_21 = (bool)((((float)L_61) > ((float)L_62))? 1 : 0);
		bool L_63 = V_21;
		if (!L_63)
		{
			goto IL_0174;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:169>
		V_2 = (0.0f);
		goto IL_0191;
	}

IL_0174:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:170>
		float L_64 = V_12;
		V_22 = (bool)((((float)L_64) > ((float)(0.0f)))? 1 : 0);
		bool L_65 = V_22;
		if (!L_65)
		{
			goto IL_0191;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:171>
		float L_66 = V_2;
		float L_67 = V_11;
		float L_68 = V_12;
		V_2 = ((float)il2cpp_codegen_multiply(L_66, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_67/L_68))))));
	}

IL_0191:
	{
	}

IL_0192:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:173>
		float L_69 = V_2;
		V_4 = L_69;
		goto IL_0197;
	}

IL_0197:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:174>
		float L_70 = V_4;
		return L_70;
	}
}
// Method Definition Index: 57332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* VolumeDebugSettings_1_GetVolumes_m0468B443B6155E956EF3128EAE2BAB30F67C1C60_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* V_0 = NULL;
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* G_B2_0 = NULL;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* G_B2_1 = NULL;
	Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* G_B1_0 = NULL;
	VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* G_B1_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:182>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:183>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:184>
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_0;
		L_0 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = VirtualFuncInvoker0< LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB >::Invoke(20, __this);
		NullCheck(L_0);
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_2;
		L_2 = VolumeManager_GetVolumes_mCD6F01BC37F4C6833FF56635904021D3E087BBDA(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_3 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9__34_0;
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_0030;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_2;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* L_5 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9;
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_6 = (Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E*)il2cpp_codegen_object_new(Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E_il2cpp_TypeInfo_var);
		Func_2__ctor_mE062569723CD2676B37650ADE8A6BBE243E2CA72(L_6, (RuntimeObject*)L_5, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 18)), NULL);
		Func_2_tCFB850A2EA6BF2D847F4D86B34C38F044A06F19E* L_7 = L_6;
		((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9__34_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9__34_0), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0030:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m83B576D3EAED3F16C09A9FBC62D8FE3E6357D055_RuntimeMethod_var);
		RuntimeObject* L_9;
		L_9 = Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B(L_8, Enumerable_Reverse_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m07661B9A8A400FE659EAE193CEEED8F65CA80C5B_RuntimeMethod_var);
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_10;
		L_10 = Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB(L_9, Enumerable_ToArray_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mF1CBC672AB74D6AC77FB82DA8D177C30D1CDD7BB_RuntimeMethod_var);
		V_0 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:185>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 57333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* VolumeDebugSettings_1_GetStates_m0FE8DECDEDB5142DC87951D7604FE4252AB2604B_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* V_0 = NULL;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* V_1 = NULL;
	int32_t V_2 = 0;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* V_3 = NULL;
	VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* V_10 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B2_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B2_1 = NULL;
	Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* G_B1_0 = NULL;
	FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* G_B1_1 = NULL;
	VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* G_B6_0 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B10_2 = NULL;
	VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* G_B12_3 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:190>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:191>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:192>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:193>
		Type_t* L_0;
		L_0 = VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_1;
		L_1 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(92, L_0, (int32_t)((int32_t)52));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_2 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9__36_0;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002d;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* L_4 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9;
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_5 = (Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630*)il2cpp_codegen_object_new(Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630_il2cpp_TypeInfo_var);
		Func_2__ctor_m720E8683356B22FA89D3983D974FC700BDE279A3(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 19)), NULL);
		Func_2_t03668587D04B8ECC3E6CE9EF3B2852118286E630* L_6 = L_5;
		((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9__36_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 17)))->___U3CU3E9__36_0), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002d:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisFieldInfo_t_mCB3957CC209F10E6FDA91C4BB12C2E6B549B7F90_RuntimeMethod_var);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_8;
		L_8 = Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145(L_7, Enumerable_ToArray_TisFieldInfo_t_m99A6AB02C6FC4690AD5DCDFCB0C9DE2F5CD5B145_RuntimeMethod_var);
		V_0 = L_8;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:195>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_9 = __this->___volumes;
		NullCheck(L_9);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_10 = V_0;
		NullCheck(L_10);
		il2cpp_array_size_t L_12[] = { (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_9)->max_length)), (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_10)->max_length)) };
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_11 = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)GenArrayNew(VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D_il2cpp_TypeInfo_var, L_12);
		V_1 = L_11;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:196>
		V_2 = 0;
		goto IL_00db;
	}

IL_0050:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:198>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_13 = __this->___volumes;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		bool L_17;
		L_17 = Volume_HasInstantiatedProfile_mA1547160C1B93EC28AB7FDBDD23ED967B9B7A8F4(L_16, NULL);
		if (L_17)
		{
			goto IL_006f;
		}
	}
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_18 = __this->___volumes;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_22 = L_21->___sharedProfile;
		G_B6_0 = L_22;
		goto IL_007c;
	}

IL_006f:
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_23 = __this->___volumes;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_27;
		L_27 = Volume_get_profile_mB157C4D67D52CE6D3E8211D6587B0EF71102E43D(L_26, NULL);
		G_B6_0 = L_27;
	}

IL_007c:
	{
		V_3 = G_B6_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:199>
		VolumeProfile_t9B5F2005F575A710F38A124EF81A6228CCACACE1* L_28 = V_3;
		Type_t* L_29;
		L_29 = VolumeDebugSettings_1_get_selectedComponentType_m2E4AEBF732995355C1820B03B3342CA4AF77F81F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_28);
		bool L_30;
		L_30 = VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9(L_28, L_29, (&V_4), VolumeProfile_TryGet_TisVolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1_m7C9ECA648C10D0445996D61597C87886E3C420A9_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_0096;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:200>
		goto IL_00d7;
	}

IL_0096:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:202>
		V_6 = 0;
		goto IL_00c9;
	}

IL_009b:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:204>
		VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1* L_32 = V_4;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		FieldInfo_t* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_37;
		L_37 = VolumeDebugSettings_1_GetParameter_m98B57E599E7EFBA133FBD5BE06692A7A1B14BC4A(__this, L_32, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_7 = L_37;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:205>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_38 = V_1;
		int32_t L_39 = V_2;
		int32_t L_40 = V_6;
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_41 = V_7;
		NullCheck(L_41);
		bool L_42;
		L_42 = VirtualFuncInvoker0< bool >::Invoke(5, L_41);
		if (L_42)
		{
			G_B11_0 = L_40;
			G_B11_1 = L_39;
			G_B11_2 = L_38;
			goto IL_00bb;
		}
		G_B10_0 = L_40;
		G_B10_1 = L_39;
		G_B10_2 = L_38;
	}
	{
		G_B12_0 = ((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)(NULL));
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_00bd;
	}

IL_00bb:
	{
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_43 = V_7;
		G_B12_0 = L_43;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_00bd:
	{
		NullCheck(G_B12_3);
		(G_B12_3)->SetAt(G_B12_2, G_B12_1, G_B12_0);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:202>
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c9:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:202>
		int32_t L_45 = V_6;
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_46 = V_0;
		NullCheck(L_46);
		V_8 = (bool)((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))? 1 : 0);
		bool L_47 = V_8;
		if (L_47)
		{
			goto IL_009b;
		}
	}
	{
	}

IL_00d7:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:196>
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00db:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:196>
		int32_t L_49 = V_2;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_50 = __this->___volumes;
		NullCheck(L_50);
		V_9 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length))))? 1 : 0);
		bool L_51 = V_9;
		if (L_51)
		{
			goto IL_0050;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:208>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_52 = V_1;
		V_10 = L_52;
		goto IL_00f4;
	}

IL_00f4:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:209>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_53 = V_10;
		return L_53;
	}
}
// Method Definition Index: 57334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_ChangedStates_m5A7E3AE70CEAE4BE0C7A44DBEF813C5B39CD1C24_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* ___0_newStates, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:213>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_0 = __this->___savedStates;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 1, NULL);
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_2 = ___0_newStates;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:214>
		V_1 = (bool)1;
		goto IL_008d;
	}

IL_0021:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:215>
		V_2 = 0;
		goto IL_0074;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:217>
		V_3 = 0;
		goto IL_005a;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:219>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_5 = __this->___savedStates;
		int32_t L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_9 = ___0_newStates;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_9);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		V_4 = (bool)((((int32_t)((((int32_t)((((RuntimeObject*)(VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)((((RuntimeObject*)(VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)L_12) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:220>
		V_1 = (bool)1;
		goto IL_008d;
	}

IL_0055:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:217>
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005a:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:217>
		int32_t L_15 = V_3;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_16 = __this->___savedStates;
		NullCheck((RuntimeArray*)L_16);
		int32_t L_17;
		L_17 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_16, 1, NULL);
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:215>
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0074:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:215>
		int32_t L_20 = V_2;
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_21 = __this->___savedStates;
		NullCheck((RuntimeArray*)L_21);
		int32_t L_22;
		L_22 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_21, 0, NULL);
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0025;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:223>
		V_1 = (bool)0;
		goto IL_008d;
	}

IL_008d:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:224>
		bool L_24 = V_1;
		return L_24;
	}
}
// Method Definition Index: 57335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_RefreshVolumes_m9DC3E0D0CB3BF7E242F0DEC0FC8BD45E630C7822_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* ___0_newVolumes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:233>
		V_0 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:234>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_0 = __this->___volumes;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_1 = ___0_newVolumes;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_2 = __this->___volumes;
		bool L_3;
		L_3 = Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21((RuntimeObject*)L_1, (RuntimeObject*)L_2, Enumerable_SequenceEqual_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_mAA30FA516DBB4BD439745E07A77E90D6AF0A2D21_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:236>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_5 = ___0_newVolumes;
		NullCheck((RuntimeArray*)L_5);
		RuntimeObject* L_6;
		L_6 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_5, NULL);
		__this->___volumes = ((VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)Castclass((RuntimeObject*)L_6, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___volumes), (void*)((VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)Castclass((RuntimeObject*)L_6, VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959_il2cpp_TypeInfo_var)));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:237>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_7;
		L_7 = VolumeDebugSettings_1_GetStates_m0FE8DECDEDB5142DC87951D7604FE4252AB2604B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->___savedStates = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedStates), (void*)L_7);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:238>
		V_0 = (bool)1;
		goto IL_0070;
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:242>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_8;
		L_8 = VolumeDebugSettings_1_GetStates_m0FE8DECDEDB5142DC87951D7604FE4252AB2604B(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_3 = L_8;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:243>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_9 = __this->___savedStates;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_10 = V_3;
		bool L_11;
		L_11 = VolumeDebugSettings_1_ChangedStates_m5A7E3AE70CEAE4BE0C7A44DBEF813C5B39CD1C24(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B8_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B8_0 = 1;
	}

IL_005e:
	{
		V_4 = (bool)G_B8_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:245>
		VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D* L_13 = V_3;
		__this->___savedStates = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedStates), (void*)L_13);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:246>
		V_0 = (bool)1;
	}

IL_006f:
	{
	}

IL_0070:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:250>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(21, __this);
		V_1 = L_14;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:251>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_15 = __this->___volumes;
		NullCheck(L_15);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)));
		__this->___weights = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weights), (void*)L_16);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:252>
		V_5 = 0;
		goto IL_00ae;
	}

IL_008f:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:253>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->___weights;
		int32_t L_18 = V_5;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_19 = __this->___volumes;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		float L_24;
		L_24 = VolumeDebugSettings_1_ComputeWeight_m2A2083BB02163D67BCCF7318FA0D20CD39B1211F(__this, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (float)L_24);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:252>
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00ae:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:252>
		int32_t L_26 = V_5;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_27 = __this->___volumes;
		NullCheck(L_27);
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))? 1 : 0);
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_008f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:255>
		bool L_29 = V_0;
		V_7 = L_29;
		goto IL_00c5;
	}

IL_00c5:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:256>
		bool L_30 = V_7;
		return L_30;
	}
}
// Method Definition Index: 57336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeDebugSettings_1_GetVolumeWeight_m3387DAC0C85557A2014BD3BCE058EB82BF9D5A77_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:265>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___weights;
		V_2 = (bool)((((RuntimeObject*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:266>
		V_3 = (0.0f);
		goto IL_007a;
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:268>
		V_0 = (0.0f);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:268>
		V_1 = (0.0f);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:269>
		V_4 = 0;
		goto IL_0060;
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:271>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___weights;
		int32_t L_3 = V_4;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:272>
		float L_6 = V_1;
		float L_7 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_subtract((1.0f), L_7))));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:273>
		float L_8 = V_0;
		float L_9 = V_1;
		V_0 = ((float)il2cpp_codegen_add(L_8, L_9));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:275>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_10 = __this->___volumes;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_14 = ___0_volume;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_14, NULL);
		V_5 = L_15;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:276>
		float L_17 = V_1;
		V_3 = L_17;
		goto IL_007a;
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:269>
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:269>
		int32_t L_19 = V_4;
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_20 = __this->___volumes;
		NullCheck(L_20);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:279>
		V_3 = (0.0f);
		goto IL_007a;
	}

IL_007a:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:280>
		float L_22 = V_3;
		return L_22;
	}
}
// Method Definition Index: 57337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeDebugSettings_1_VolumeHasInfluence_m942AC540CBD53558C53F93061616B789E26EE055_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___0_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:289>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___weights;
		V_1 = (bool)((((RuntimeObject*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:290>
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:292>
		VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959* L_2 = __this->___volumes;
		Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* L_3 = ___0_volume;
		int32_t L_4;
		L_4 = Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2(L_2, L_3, Array_IndexOf_TisVolume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377_m4150F2AE8B4B55425B19967BA711A84415E259D2_RuntimeMethod_var);
		V_0 = L_4;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:293>
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:294>
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:296>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___weights;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		float L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = (bool)((((int32_t)((((float)L_10) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_0040:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:297>
		bool L_11 = V_2;
		return L_11;
	}
}
// Method Definition Index: 57338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* VolumeDebugSettings_1_get_componentTypes_mA794C83C8CBF1FAA888C4861D00728352588669A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B3_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B3_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B2_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B2_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:40>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_0 = ((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___s_ComponentTypes;
		V_0 = (bool)((((RuntimeObject*)(List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0092;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:42>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:43>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:44>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:45>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:46>
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_2;
		L_2 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		NullCheck(L_2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3;
		L_3 = VolumeManager_get_baseComponentTypeArray_mA7074538EEBCE5CA3CBAD4A72919B3BB8B6095C4_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_4 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = L_3;
			goto IL_003a;
		}
		G_B2_0 = L_5;
		G_B2_1 = L_3;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* L_6 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_7 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_7, (RuntimeObject*)L_6, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_8 = L_7;
		((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_0), (void*)L_8);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
	}

IL_003a:
	{
		RuntimeObject* L_9;
		L_9 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8((RuntimeObject*)G_B3_1, G_B3_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_10 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_1;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_11 = L_10;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = L_9;
			goto IL_005e;
		}
		G_B4_0 = L_11;
		G_B4_1 = L_9;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* L_12 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_13 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_13, (RuntimeObject*)L_12, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26)), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_14 = L_13;
		((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_1), (void*)L_14);
		G_B5_0 = L_14;
		G_B5_1 = G_B4_1;
	}

IL_005e:
	{
		RuntimeObject* L_15;
		L_15 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B5_1, G_B5_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_16 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_2;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_17 = L_16;
		if (L_17)
		{
			G_B7_0 = L_17;
			G_B7_1 = L_15;
			goto IL_0082;
		}
		G_B6_0 = L_17;
		G_B6_1 = L_15;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3* L_18 = ((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_19 = (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*)il2cpp_codegen_object_new(Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897(L_19, (RuntimeObject*)L_18, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)), NULL);
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_20 = L_19;
		((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0C8B5DB0FF89E90637B78D3803BB3516821A41D3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)))->___U3CU3E9__43_2), (void*)L_20);
		G_B7_0 = L_20;
		G_B7_1 = G_B6_1;
	}

IL_0082:
	{
		RuntimeObject* L_21;
		L_21 = Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8(G_B7_1, G_B7_0, Enumerable_OrderBy_TisType_t_TisString_t_m80B856E53453B79C6CF8E892E7B5F43C3CFF72B8_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_22;
		L_22 = Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E((RuntimeObject*)L_21, Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___s_ComponentTypes = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___s_ComponentTypes), (void*)L_22);
	}

IL_0092:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:48>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_23 = ((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___s_ComponentTypes;
		V_1 = L_23;
		goto IL_009a;
	}

IL_009a:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:49>
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_24 = V_1;
		return L_24;
	}
}
// Method Definition Index: 57339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeDebugSettings_1_ComponentDisplayName_mE9E8CC2CB721648B66205BD16A73AD5B2D3B3AC0_gshared (Type_t* ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* V_0 = NULL;
	VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:58>
		Type_t* L_0 = ___0_component;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = CustomAttributeExtensions_GetCustomAttribute_m8451F6949BEA92A69AE673CD95D6AD767B66880A((MemberInfo_t*)L_0, L_2, (bool)0, NULL);
		V_0 = ((VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833*)IsInstClass((RuntimeObject*)L_3, VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var));
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_4 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:59>
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = ((VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9*)L_6)->___menu;
		V_3 = L_7;
		goto IL_005c;
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:61>
		Type_t* L_8 = ___0_component;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_11;
		L_11 = CustomAttributeExtensions_GetCustomAttribute_m8451F6949BEA92A69AE673CD95D6AD767B66880A((MemberInfo_t*)L_8, L_10, (bool)0, NULL);
		V_1 = ((VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833*)IsInstClass((RuntimeObject*)L_11, VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833_il2cpp_TypeInfo_var));
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_12 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:62>
		VolumeComponentMenuForRenderPipeline_t5847DFC2872CCA87BEB212DB568ECA6E2E75D833* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = ((VolumeComponentMenu_t15FF12A6DEAE11D4059CABEF6E1806EEF83E17F9*)L_14)->___menu;
		V_3 = L_15;
		goto IL_005c;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:64>
		Type_t* L_16 = ___0_component;
		NullCheck((MemberInfo_t*)L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_16);
		V_3 = L_17;
		goto IL_005c;
	}

IL_005c:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:65>
		String_t* L_18 = V_3;
		return L_18;
	}
}
// Method Definition Index: 57340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_gshared (const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:71>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___U3CadditionalCameraDatasU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 57341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_additionalCameraDatas_m5CA00BE824DDAC8D8B04DA9A9B02265E069ECD8E_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:71>
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___U3CadditionalCameraDatasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___U3CadditionalCameraDatasU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 57342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_RegisterCamera_m945720C6ECADDD66F21F5771B446510B88246874_gshared (RuntimeObject* ___0_additionalCamera, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:80>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0;
		L_0 = VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject* L_1 = ___0_additionalCamera;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:81>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject* L_5 = ___0_additionalCamera;
		NullCheck(L_4);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 31));
	}

IL_001f:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:82>
		return;
	}
}
// Method Definition Index: 57343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_UnRegisterCamera_m84DFDB2FB62EB2DB79A30F3CA2F97651444189A3_gshared (RuntimeObject* ___0_additionalCamera, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:91>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0;
		L_0 = VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject* L_1 = ___0_additionalCamera;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:92>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4;
		L_4 = VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject* L_5 = ___0_additionalCamera;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 32));
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:93>
		return;
	}
}
// Method Definition Index: 57344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1__ctor_m864644C7BF3F289CAF8CE675A45697B82FE6E82A_gshared (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:18>
		__this->___U3CselectedComponentU3Ek__BackingField = 0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:26>
		__this->___m_SelectedCameraIndex = (-1);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:44>
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_0 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_0, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		__this->___m_Cameras = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Cameras), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:137>
		__this->___weights = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weights), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:176>
		__this->___volumes = (VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___volumes), (void*)(VolumeU5BU5D_t4B7AA0C9DEB2BEB05C08348C6C5072402D2AE959*)NULL);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:187>
		__this->___savedStates = (VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___savedStates), (void*)(VolumeParameterU5BU2CU5D_tA6890806B6A240268413262959F56D6F8992695D*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 57345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeDebugSettings_1__cctor_m73C5EE168DB5BBCB6FD3BD9A722689297C06F0CA_gshared (const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:71>
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___U3CadditionalCameraDatasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___U3CadditionalCameraDatasU3Ek__BackingField), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 59040
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_get_value_m130C88D03ABADB576A908E2E26FE90E24881F7DB_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:170>
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
// Method Definition Index: 59041
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_set_value_m09FF3C49735C8ECA8ACA4572044EA393D95C6376_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:171>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
// Method Definition Index: 59042
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_mA616936A4E10317580AE921071D36637ED0A3FE9_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:178>
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7): *(void**)L_0), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:180>
		return;
	}
}
// Method Definition Index: 59043
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_overrideState, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:187>
		VolumeParameter__ctor_m1A76B3C6C284C912F55F7C7E6EF21A18AF3930D2((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, NULL);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:189>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_value : &___0_value), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:190>
		bool L_1 = ___1_overrideState;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, L_1);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:191>
		return;
	}
}
// Method Definition Index: 59044
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_m0CA46FB75295800D8B2A7C02F66F7DDD9384D23C_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_from, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:196>
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_from;
		NullCheck(((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), (Il2CppFullySharedGenericAny*)L_1);
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_2 = ___1_to;
		NullCheck(((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), (Il2CppFullySharedGenericAny*)L_3);
		float L_4 = ___2_t;
		VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float >::Invoke(16, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_3: *(void**)L_3), L_4);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:197>
		return;
	}
}
// Method Definition Index: 59045
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Interp_mA5DD59296A4481DBEC4ACDE08B11497E0838684F_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_from, Il2CppFullySharedGenericAny ___1_to, float ___2_t, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B2_0 = NULL;
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(G_B3_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* G_B3_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:213>
		float L_0 = ___2_t;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B2_0 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this);
			goto IL_000d;
		}
		G_B1_0 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this);
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_from : &___0_from), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(G_B3_0, L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		G_B3_1 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)G_B1_0);
		goto IL_000e;
	}

IL_000d:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___1_to : &___1_to), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(G_B3_0, L_2, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		G_B3_1 = ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)G_B2_0);
	}

IL_000e:
	{
		NullCheck(G_B3_1);
		il2cpp_codegen_write_instance_field_data(G_B3_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), G_B3_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:214>
		return;
	}
}
// Method Definition Index: 59046
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_Override_m7C1B4B87F845CEF17B9FE1DC7C476741E2AA73C2_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, Il2CppFullySharedGenericAny ___0_x, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:222>
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VirtualActionInvoker1< bool >::Invoke(6, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (bool)1);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:223>
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? ___0_x : &___0_x), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:224>
		return;
	}
}
// Method Definition Index: 59047
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_SetValue_mC22AF6C46073698212DA5E411F582D8D1A4F2589_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* ___0_parameter, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:233>
		VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72* L_0 = ___0_parameter;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:234>
		return;
	}
}
// Method Definition Index: 59048
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_1_GetHashCode_m67709A9D28380EB1F99B0D0877445D25828E5891_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_3, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	int32_t V_4 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:244>
		V_0 = ((int32_t)17);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:245>
		int32_t L_0 = V_0;
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)23))), L_2));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:247>
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, __this, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_5, V_3, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_5: *(void**)L_5));
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:248>
		int32_t L_8 = V_0;
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, __this, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(V_3, L_9, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		int32_t L_11;
		L_11 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_10, (void*)(Il2CppFullySharedGenericAny*)V_3);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)23))), L_11));
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:250>
		int32_t L_12 = V_0;
		V_4 = L_12;
		goto IL_0058;
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:252>
		int32_t L_13 = V_4;
		return L_13;
	}
}
// Method Definition Index: 59049
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VolumeParameter_1_ToString_m1DC4E78F08D48194AF38E9ED9EB63B4C4195E86E_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:258>
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, __this, (Il2CppFullySharedGenericAny*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1), L_0);
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.boolean_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_1, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 59050
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Equality_mFB9A5ACACD63E673940ABCCD71BFBCF5939514B3_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_lhs, Il2CppFullySharedGenericAny ___1_rhs, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	memset(V_0, 0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	int32_t G_B4_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:266>
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_lhs;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_1 = ___0_lhs;
		NullCheck(L_1);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, L_1, (Il2CppFullySharedGenericAny*)L_2);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_4 = ___0_lhs;
		NullCheck(L_4);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(14, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___1_rhs : &___1_rhs), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_6);
		bool L_9;
		L_9 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10), L_8, (void*)(Il2CppFullySharedGenericAny*)V_0, L_7);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 0;
	}

IL_002d:
	{
		return (bool)G_B4_0;
	}
}
// Method Definition Index: 59051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_op_Inequality_m8551AFE47546E9FE859077FB75033B4DABB36AA8_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_lhs, Il2CppFullySharedGenericAny ___1_rhs, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:274>
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_lhs;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? ___1_rhs : &___1_rhs), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		bool L_3;
		L_3 = VolumeParameter_1_op_Equality_mFB9A5ACACD63E673940ABCCD71BFBCF5939514B3(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7): *(void**)L_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 59052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_mE6CB1D07EC2DE1DE825EB7AE097CA54AB980218F_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:283>
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_other;
		V_0 = (bool)((((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:284>
		V_1 = (bool)0;
		goto IL_0032;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:286>
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_2 = ___0_other;
		V_2 = (bool)((((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this) == ((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:287>
		V_1 = (bool)1;
		goto IL_0032;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:289>
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4;
		L_4 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_6 = ___0_other;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		NullCheck(L_4);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_7: *(void**)L_7));
		V_1 = L_8;
		goto IL_0032;
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:290>
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 59053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_1_Equals_m72DBE726E1E91E1E6FBB9463C65FB181504FAC57_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:299>
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:300>
		V_1 = (bool)0;
		goto IL_0041;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:302>
		RuntimeObject* L_2 = ___0_obj;
		V_2 = (bool)((((RuntimeObject*)(VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)__this) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:303>
		V_1 = (bool)1;
		goto IL_0041;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:305>
		RuntimeObject* L_4 = ___0_obj;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		NullCheck((RuntimeObject*)__this);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:306>
		V_1 = (bool)0;
		goto IL_0041;
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:308>
		RuntimeObject* L_9 = ___0_obj;
		bool L_10;
		L_10 = VolumeParameter_1_Equals_mE6CB1D07EC2DE1DE825EB7AE097CA54AB980218F(__this, ((VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)CastclassClass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 0))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_10;
		goto IL_0041;
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:309>
		bool L_11 = V_1;
		return L_11;
	}
}
// Method Definition Index: 59054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeParameter_1_Clone_m6C0CD60546286A326AA2237501E028E5E537DBF5_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:314>
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_GetValue_TisIl2CppFullySharedGenericAny_m1802EB8111365F0224F3D40314C1DDC085109D46((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck((VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(5, (VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72*)__this);
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_2 = (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		VolumeParameter_1__ctor_m863FDCA6A4AE26E8D21738715A6E337BB7D5FDD8(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_3, L_0, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7): *(void**)L_0), L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_0 = (RuntimeObject*)L_2;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:315>
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 59055
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeParameter_1_op_Explicit_m06E2D8024C6E6B043D67E524AD2FB6A0EA25BF4F_gshared (VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* ___0_prop, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeParameter.cs:323>
		VolumeParameter_1_tB1EA9187ACF6A0B2CAC6CF51C310D670594DCCD3* L_0 = ___0_prop;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)), SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t6F7A42E482B273BE8680284FFC0EA16E6A955CD7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 4653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_target;
		WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 4654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___1_trackResurrection;
		__this->___trackResurrection = L_0;
		bool L_1 = ___1_trackResurrection;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject* L_2 = ___0_target;
		int32_t L_3 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_2, L_3, NULL);
		__this->___handle = L_4;
		return;
	}
}
// Method Definition Index: 4655
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		NullCheck(L_2);
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, NULL);
		__this->___trackResurrection = L_3;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_6, NULL);
		V_0 = L_7;
		bool L_8 = __this->___trackResurrection;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_9, L_10, NULL);
		__this->___handle = L_11;
		return;
	}
}
// Method Definition Index: 4656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		bool L_3 = __this->___trackResurrection;
		NullCheck(L_2);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_8;
		L_8 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline(L_7, NULL);
		NullCheck(L_6);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_6, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_8, NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		NullCheck(L_9);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_9, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, NULL, NULL);
		return;
	}
}
// Method Definition Index: 4657
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_SetTarget_mCEAE8D9CF9551015CE46420AB8614A8D1F14C329_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_1 = ___0_target;
		GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D_inline(L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 4658
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m4982797589731AB705E9C79FA4531331F40410AB_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject** ___0_target, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject** L_2 = ___0_target;
		il2cpp_codegen_initobj(L_2, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0016:
	{
		RuntimeObject** L_3 = ___0_target;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline(L_4, NULL);
		*(RuntimeObject**)L_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		RuntimeObject** L_6 = ___0_target;
		RuntimeObject* L_7 = (*(RuntimeObject**)L_6);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 4659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_m22CABA82C1F2B17A77E275483306A0DADECAF151_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 45121
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCompletionSource_1__ctor_m13CEDC0A86393FB85F2E66EA67014C70C41083EE_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, bool ___0_runAsync, const RuntimeMethod* method) 
{
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* G_B2_0 = NULL;
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___0_runAsync;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)64);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_1 = (TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		TaskCompletionSource_1__ctor_m66A94FA06482E1BF022E155A1243802F3BCEAD7C(L_1, (int32_t)G_B3_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		NullCheck(G_B3_1);
		G_B3_1->___completion = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___completion), (void*)L_1);
		return;
	}
}
// Method Definition Index: 45122
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* WebCompletionSource_1_get_CurrentResult_mC1D6F5E4169EAEC90D7E02EEC2DD3FF7087EC035_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	{
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_0 = __this->___currentResult;
		return L_0;
	}
}
// Method Definition Index: 45123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebCompletionSource_1_get_Task_mABFED18FF1EB8709C0110FA07D888A52F950367D_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_0 = __this->___completion;
		NullCheck(L_0);
		Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* L_1;
		L_1 = TaskCompletionSource_1_get_Task_m99C4E7D405DA7485360F4554AD219A778BBED3C7_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_1;
	}
}
// Method Definition Index: 45124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCompleted_m3E4132773ACAE17F3953CB76254F5C922FFB31B7_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, Il2CppFullySharedGenericAny ___0_argument, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9);
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_argument : &___0_argument), SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_1 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Result__ctor_mD5334A91B372F17CC957E2376D067FD29F493A72(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_T_t2650EB3BE331C2443ADED45E3A4082412DD876E9): *(void**)L_0), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_1;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_3 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_4 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5;
		L_5 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_3, L_4, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_6 = __this->___completion;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = TaskCompletionSource_1_TrySetResult_m6421F3166CAE62DBE3D5B5C203F0399644E004A1(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_8;
	}
}
// Method Definition Index: 45125
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCompleted_m3569793D667717DAE788FBC010D43FFCF5CC0597_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_0 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Result__ctor_mA920B8E0BECD7D1B6C8AC11BEB43AD07864DB8F8(L_0, (int32_t)1, (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_1 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_2 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_3;
		L_3 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_1, L_2, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_4 = __this->___completion;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = TaskCompletionSource_1_TrySetResult_m6421F3166CAE62DBE3D5B5C203F0399644E004A1(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_6;
	}
}
// Method Definition Index: 45126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCanceled_m9E2CFCAC2261552ADC05BF4708D2F70A2DB7B280_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(L_0, NULL);
		bool L_1;
		L_1 = WebCompletionSource_1_TrySetCanceled_m6069824D799921F76E03A0EED077F2E8B7090826(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return L_1;
	}
}
// Method Definition Index: 45127
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetCanceled_m6069824D799921F76E03A0EED077F2E8B7090826_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_error, const RuntimeMethod* method) 
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803((Exception_t*)L_0, NULL);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_2 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Result__ctor_mA920B8E0BECD7D1B6C8AC11BEB43AD07864DB8F8(L_2, (int32_t)2, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_3 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_4 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5;
		L_5 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_3, L_4, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_6 = __this->___completion;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = TaskCompletionSource_1_TrySetResult_m6421F3166CAE62DBE3D5B5C203F0399644E004A1(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_8;
	}
}
// Method Definition Index: 45128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCompletionSource_1_TrySetException_m0A5AB73E23E85CAD2080073F1380B6AA4B208BCB_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* V_0 = NULL;
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_2 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Result__ctor_mA920B8E0BECD7D1B6C8AC11BEB43AD07864DB8F8(L_2, (int32_t)3, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93** L_3 = (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93**)(&__this->___currentResult);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_4 = V_0;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5;
		L_5 = InterlockedCompareExchangeImpl<Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*>(L_3, L_4, (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93*)NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_6 = __this->___completion;
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = TaskCompletionSource_1_TrySetResult_m6421F3166CAE62DBE3D5B5C203F0399644E004A1(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_8;
	}
}
// Method Definition Index: 45129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCompletionSource_1_ThrowOnError_m7C2B39BD3A1FE60DD5EA8D0B181EAD73DC000470_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_0 = __this->___completion;
		NullCheck(L_0);
		Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* L_1;
		L_1 = TaskCompletionSource_1_get_Task_m99C4E7D405DA7485360F4554AD219A778BBED3C7_inline(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_1);
		bool L_2;
		L_2 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_1, NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		TaskCompletionSource_1_t04C19E28FAF1B686CB256FE9F84AA8AC57A7FEA7* L_3 = __this->___completion;
		NullCheck(L_3);
		Task_1_t82C63013D5AE6BAE3F6A03941A7758CC8CCBC5BC* L_4;
		L_4 = TaskCompletionSource_1_get_Task_m99C4E7D405DA7485360F4554AD219A778BBED3C7_inline(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck(L_4);
		Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* L_5;
		L_5 = Task_1_get_Result_m4BD43EF8B903D5FEDED967167DB07B2941B7E6C9(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_5);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_6;
		L_6 = Result_get_Error_mA9CAACBF365B2B74E821767A0713ADA11148EC69_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_7 = L_6;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002d;
		}
		G_B3_0 = L_7;
	}
	{
		return;
	}

IL_002d:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
		return;
	}
}
// Method Definition Index: 45130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* WebCompletionSource_1_WaitForCompletion_m0A0641169CC3E816311B3D9AAD800FC38CE823FA_gshared (WebCompletionSource_1_t1C9A1856B56A56D2E3CBE124A73CB4ADA3DBAA6F* __this, const RuntimeMethod* method) 
{
	U3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A(il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder))->___m_coreState))->___m_stateMachine), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder))->___m_coreState))->___m_defaultContextAction), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___m_task), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* L_1 = (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)(&(&V_0)->___U3CU3Et__builder);
		AsyncTaskMethodBuilder_1_Start_TisU3CWaitForCompletionU3Ed__15_t1E7A90912CE0FB4BBFDADC017893E65373B96937_m38C56B931D2323D0F0219A4AFDBC6416FA04D52A(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* L_2 = (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)(&(&V_0)->___U3CU3Et__builder);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// Method Definition Index: 100949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereArrayIterator_1_Clone_m1D80001794E47D2DF00A77273FD71D61987E8A44_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_2 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// Method Definition Index: 100950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m42FC055181A1CDD12BBB46A9EE9ED76C6048BA07_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	memset(V_0, 0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		NullCheck(L_6);
		bool L_8;
		L_8 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_7: *(void**)L_7), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// Method Definition Index: 100952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mB2C59E78355E518D359A6D5035BCD6254337B84E_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = Enumerable_CombinePredicates_TisIl2CppFullySharedGenericAny_m93E135AF98923DA7992DF8B462586C255923A45D(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_4 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// Method Definition Index: 100943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereEnumerableIterator_1_Clone_m0317D203B88386A9A479C72FA9D62763FD0A91D3_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_2 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// Method Definition Index: 100944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2583FECFDC8EDFE66C959C7C386F99E287C5763E_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		Iterator_1_Dispose_m4BA67A3D7DA249425AA8E0A0EC94AB535444D1AD((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 100945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1A18D4050C069B6C4310DAB9857281E37DCB2C69_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	memset(V_1, 0, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_10, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// Method Definition Index: 100947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC623267514B4299E409A01161DBBDA5362CEDFC2_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = Enumerable_CombinePredicates_TisIl2CppFullySharedGenericAny_m93E135AF98923DA7992DF8B462586C255923A45D(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_4 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
// Method Definition Index: 100954
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
// Method Definition Index: 100955
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61(L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		NullCheck(L_6);
		bool L_8;
		L_8 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// Method Definition Index: 100957
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = Enumerable_CombinePredicates_TisIl2CppFullySharedGenericAny_m93E135AF98923DA7992DF8B462586C255923A45D(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100964
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// Method Definition Index: 100965
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// Method Definition Index: 100966
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_10);
		Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_inline(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// Method Definition Index: 100968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100958
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// Method Definition Index: 100959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// Method Definition Index: 100960
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		Iterator_1_Dispose_m4BA67A3D7DA249425AA8E0A0EC94AB535444D1AD((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 100961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_11);
		Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_inline(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 100963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 100969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m0EADA9A3982A5CA2DF574359A549E11818802F2A((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// Method Definition Index: 100970
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// Method Definition Index: 100971
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61(L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = Func_2_Invoke_mFF6CAE6DFB13AFB5921FB3201467228A326875DE_inline(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_inline(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 100973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 80281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:108>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:108>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
// Method Definition Index: 80282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:112>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:113>
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:114>
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_001f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		G_B3_1->___m_Length = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:115>
		int32_t L_7 = __this->___m_Start;
		int32_t L_8 = __this->___m_Length;
		int32_t L_9;
		L_9 = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) > ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:116>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_AdjustorThunk (RuntimeObject* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
// Method Definition Index: 80283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:120>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
// Method Definition Index: 80284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:121>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? ___1_value : &___1_value), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 80285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 80286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:125>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 80287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_gshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:129>
		int32_t L_0 = __this->___m_Length;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:130>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___m_Data;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Start;
		int32_t L_5 = __this->___m_Length;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_6 = ___0_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mFECEFDEFE0154FD35AB3600D1EC1BCA3688FB81D(L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), 1)), L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:131>
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_AdjustorThunk (RuntimeObject* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*>(__this + _offset);
	WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_Multicast(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* currentDelegate = reinterpret_cast<WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD*>(delegatesToInvoke[i]);
		typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (RuntimeObject*, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenStaticInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_ClosedStaticInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	return InvokerFuncInvoker8< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RuntimeObject*, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_ClosedInstInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	return InvokerFuncInvoker7< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenInstInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	return InvokerFuncInvoker6< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenVirtualInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	return VirtualFuncInvoker6Invoker< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenInterfaceInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	return InterfaceFuncInvoker6Invoker< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenGenericVirtualInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	return GenericVirtualFuncInvoker6Invoker< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(method, (RuntimeObject*)___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenGenericInterfaceInvoker(WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method)
{
	NullCheck(___0_handler);
	return GenericInterfaceFuncInvoker6Invoker< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(method, (RuntimeObject*)___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken);
}
// Method Definition Index: 53904
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAsyncDelegate_1__ctor_mD9FB724B31D99F9921DADECF1D501728A608CEE0_gshared (WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_Multicast;
}
// Method Definition Index: 53905
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_Invoke_m68824643D7E647405BD86B5CC04802CEB42BBBC0_gshared (WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method) 
{
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (RuntimeObject*, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC*, Il2CppFullySharedGenericAny, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711*, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F*, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992*, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_handler, ___1_value, ___2_buffer, ___3_lengthCache, ___4_parameter, ___5_async, ___6_cancellationToken, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 53906
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteAsyncDelegate_1_BeginInvoke_m98BEEDAFF5795CDDB225F0CCBDDC211143EAD57F_gshared (WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, NpgsqlTypeHandler_tDE8D0DC8B72AB208C5DE80B3ED08CA48AF15BBFC* ___0_handler, Il2CppFullySharedGenericAny ___1_value, NpgsqlWriteBuffer_t018EFA7F86A9933C670C12B634A53653CF44B711* ___2_buffer, NpgsqlLengthCache_t90EBC2550B4B8397D9A1A301C71CC75265957E4F* ___3_lengthCache, NpgsqlParameter_t2555761B7BBEBEC500F7DAFD9E65FC87EC6B7992* ___4_parameter, bool ___5_async, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = ___0_handler;
	RuntimeClass* ___1_value_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_value_klass) ? Box(___1_value_klass, ___1_value) : (void*)___1_value);
	__d_args[2] = ___2_buffer;
	__d_args[3] = ___3_lengthCache;
	__d_args[4] = ___4_parameter;
	__d_args[5] = Box(il2cpp_defaults.boolean_class, &___5_async);
	__d_args[6] = Box(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var, &___6_cancellationToken);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
// Method Definition Index: 53907
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WriteAsyncDelegate_1_EndInvoke_m6348DC874778286FDE06B1047985221DC58E71D0_gshared (WriteAsyncDelegate_1_tAC22C5913557A4093D54A7ACE637C079A0563AFD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
// Method Definition Index: 15025
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
// Method Definition Index: 15026
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 134863
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 1), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
// Method Definition Index: 134864
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_45 = L_13;
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_10 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_11 = __this->____entries;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ExtractKeyDelegate_Invoke_m299616CF7575CD317723CE89D3BA8B8F04A9B722_inline(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_13: *(void**)L_13), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = __this->____entries;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), (-1), 0, NULL);
		V_3 = L_21;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = __this->____entries;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_3 = L_24;
	}

IL_009f:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a7:
	{
		int32_t L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____buckets;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_30)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		V_0 = ((int32_t)(((RuntimeArray*)L_31)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_32)->max_length)), 2));
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_34 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_35 = __this->____extractKey;
		int32_t L_36 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_37 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F(L_37, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_37;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = L_41;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_43 = __this->____entries;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_42);
		bool L_46;
		L_46 = XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2(L_42, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_45: *(void**)L_45), (Il2CppFullySharedGenericAny*)V_6, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_47 = __this->____entries;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_5 = L_49;
	}

IL_0130:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_013b:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_54 = V_1;
		return L_54;
	}
}
// Method Definition Index: 134865
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
// Method Definition Index: 134866
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_41 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_newValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = __this->____extractKey;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_m299616CF7575CD317723CE89D3BA8B8F04A9B722_inline(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_3: *(void**)L_3), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = __this->____entries;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_instance_field_data(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0), L_17, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_18 = __this->____entries;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1), L_20);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____buckets;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_27 = __this->____entries;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2)))), L_29, 0, NULL);
		V_1 = L_30;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_32 = V_1;
		return (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_33 = V_3;
		String_t* L_34 = V_2;
		String_t* L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_35, NULL);
		bool L_37;
		L_37 = XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD(__this, L_33, L_34, 0, L_36, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_37)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_38 = ___1_newValue;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_39 = __this->____entries;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_38, L_41, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (void**)(Il2CppFullySharedGenericAny*)L_38, (void*)L_41);
		return (bool)1;
	}
}
// Method Definition Index: 134867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_gshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_9 = __this->____entries;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),1));
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_13 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_14 = __this->____entries;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ExtractKeyDelegate_Invoke_m299616CF7575CD317723CE89D3BA8B8F04A9B722_inline(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_16: *(void**)L_16), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_22 = __this->____entries;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),0)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_24 = __this->____entries;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_26;
		int32_t L_27 = V_0;
		if (L_27)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____buckets;
		int32_t L_29 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		int32_t L_31 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1))))), (int32_t)L_31);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_32 = __this->____entries;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2), L_34);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_35 = ___3_count;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_37))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_38 = ___1_key;
		int32_t L_39 = ___2_index;
		String_t* L_40 = V_2;
		int32_t L_41 = ___3_count;
		int32_t L_42;
		L_42 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_38, L_39, L_40, 0, L_41, NULL);
		if (L_42)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_43 = ___4_entryIndex;
		int32_t L_44 = V_1;
		*((int32_t*)L_43) = (int32_t)L_44;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_45 = V_1;
		V_0 = L_45;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_46 = __this->____entries;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4),2));
		V_1 = L_48;
	}

IL_00f9:
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_50 = ___4_entryIndex;
		int32_t L_51 = V_0;
		*((int32_t*)L_50) = (int32_t)L_51;
		return (bool)0;
	}
}
// Method Definition Index: 134868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 134858
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
// Method Definition Index: 134859
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppFullySharedGenericAny* L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return L_5;
	}
}
// Method Definition Index: 134860
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_gshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_value : &___0_value), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 15247
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_0 = __this->___m_ViewController;
		return L_0;
	}
}
// Method Definition Index: 88959
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 15261
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_LastHeight;
		return L_0;
	}
}
// Method Definition Index: 15244
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_0 = __this->___m_ScrollView;
		return L_0;
	}
}
// Method Definition Index: 14894
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14898
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisDragGhostU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14895
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CindexU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_id_m765F123306544777F8B1E273AFB8A0A1E94C4857_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14897
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 16438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CcontentViewportU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 88971
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 20501
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 15245
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_0 = __this->___m_Dragger;
		return L_0;
	}
}
// Method Definition Index: 17085
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisDraggingU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 17087
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) 
{
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_0 = __this->___m_Item;
		return L_0;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_min;
		int32_t L_1 = ___2_max;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_2 = ___1_min;
		int32_t L_3 = ___2_max;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77(L_2, L_3, Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC7732632C280D3AEE2B08C470A78B9C5C4CBD77_RuntimeMethod_var);
	}

IL_000b:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___1_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_6 = ___1_min;
		return L_6;
	}

IL_0011:
	{
		int32_t L_7 = ___0_value;
		int32_t L_8 = ___2_max;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_9 = ___2_max;
		return L_9;
	}

IL_0017:
	{
		int32_t L_10 = ___0_value;
		return L_10;
	}
}
// Method Definition Index: 88976
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 58982
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Volume_get_isGlobal_m09C1E1FB39D06DD9EC78DF276DE9A1FBE3E42763_inline (Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/Volume.cs:23>
		bool L_0 = __this->___m_IsGlobal;
		return L_0;
	}
}
// Method Definition Index: 88893
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 88880
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 57370
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* VolumeManager_get_baseComponentTypeArray_mA7074538EEBCE5CA3CBAD4A72919B3BB8B6095C4_inline (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Volume/VolumeManager.cs:123>
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = __this->___U3CbaseComponentTypeArrayU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 8896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
// Method Definition Index: 8900
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
// Method Definition Index: 8901
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_set_Target_m1DB05E14910747D2A74ACEB4C48028C4AEBFCF3D_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		intptr_t L_2 = __this->___handle;
		RuntimeObject* L_3 = ___0_value;
		GCHandle_SetRef_m89BDD13EED80A828682061BEF6D21F334AE45FC7_inline(L_2, L_3, NULL);
		return;
	}

IL_001a:
	{
		RuntimeObject* L_4 = ___0_value;
		intptr_t L_5 = __this->___handle;
		intptr_t L_6;
		L_6 = GCHandle_GetTargetHandle_mE33A9DC8A8FA880F9CAA057300E28BC8AE743CED(L_4, L_5, (-1), NULL);
		__this->___handle = L_6;
		return;
	}
}
// Method Definition Index: 828
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 12433
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
// Method Definition Index: 1011
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 12373
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 90427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B2_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B1_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B9_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B8_0 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->___m_ActionOnRelease;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_element;
		NullCheck(G_B2_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B2_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_FreshlyReleased;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___0_element;
		__this->___m_FreshlyReleased = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreshlyReleased), (void*)L_5);
		goto IL_007a;
	}

IL_0031:
	{
		int32_t L_6;
		L_6 = ObjectPool_1_get_CountInactive_m9A907BFCDCBFE910B784BDBF71EEDC6D14C90608(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_7 = __this->___m_MaxSize;
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = __this->___m_List;
		RuntimeObject* L_10 = ___0_element;
		NullCheck(L_9);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		goto IL_007a;
	}

IL_0054:
	{
		int32_t L_11;
		L_11 = ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_2 = L_11;
		int32_t L_12 = V_2;
		ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = __this->___m_ActionOnDestroy;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = L_13;
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0072;
		}
		G_B8_0 = L_14;
	}
	{
		goto IL_0079;
	}

IL_0072:
	{
		RuntimeObject* L_15 = ___0_element;
		NullCheck(G_B9_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B9_0, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_0079:
	{
	}

IL_007a:
	{
		return;
	}
}
// Method Definition Index: 12392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 2501
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
// Method Definition Index: 12384
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E): *(void**)L_9), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 90425
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B7_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___m_FreshlyReleased;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_FreshlyReleased;
		V_0 = L_2;
		RuntimeObject** L_3 = (RuntimeObject**)(&__this->___m_FreshlyReleased);
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		goto IL_008a;
	}

IL_002a:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_List;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_7 = __this->___m_CreateFunc;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_inline(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_8;
		int32_t L_9;
		L_9 = ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_3 = L_9;
		int32_t L_10 = V_3;
		ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		goto IL_008a;
	}

IL_005d:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = __this->___m_List;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13 = __this->___m_List;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_15;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_16 = __this->___m_List;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_008a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->___m_ActionOnGet;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_19 = L_18;
		if (L_19)
		{
			G_B7_0 = L_19;
			goto IL_0096;
		}
		G_B6_0 = L_19;
	}
	{
		goto IL_009d;
	}

IL_0096:
	{
		RuntimeObject* L_20 = V_0;
		NullCheck(G_B7_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(G_B7_0, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_009d:
	{
		RuntimeObject* L_21 = V_0;
		V_5 = L_21;
		goto IL_00a2;
	}

IL_00a2:
	{
		RuntimeObject* L_22 = V_5;
		return L_22;
	}
}
// Method Definition Index: 57315
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VolumeDebugSettings_1_get_selectedComponent_m0C8956BC3F8FD603E492C8E6895351C4B59D8909_gshared_inline (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:18>
		int32_t L_0 = __this->___U3CselectedComponentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 57316
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VolumeDebugSettings_1_set_selectedComponent_mB98032B7495A08D17A106619BBAD520939E84376_gshared_inline (VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Debugging/VolumeDebugSettings.cs:18>
		int32_t L_0 = ___0_value;
		__this->___U3CselectedComponentU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 57340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VolumeDebugSettings_1_get_additionalCameraDatas_m4A5F64767756A2F2D16F944642225DCDAFA9449C_gshared_inline (const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core/Runtime/Deprecated.cs:71>
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ((VolumeDebugSettings_1_t379CE86D52371FB0C9488644DE42FBA791517889_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 24)))->___U3CadditionalCameraDatasU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 12614
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0 = ((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 5473
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = __this->____task;
		return L_0;
	}
}
// Method Definition Index: 45133
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* Result_get_Error_mA9CAACBF365B2B74E821767A0713ADA11148EC69_gshared_inline (Result_t3B46D8CB111F11A3E1274C22D61B9130725BEE93* __this, const RuntimeMethod* method) 
{
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_0 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
// Method Definition Index: 80285
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_gshared_inline (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal/Runtime/LightCookieManager.cs:124>
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 134862
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_m299616CF7575CD317723CE89D3BA8B8F04A9B722_gshared_inline (ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 88861
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
// Method Definition Index: 4378
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 8899
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		return (bool)((((intptr_t)((intptr_t)(L_0&((intptr_t)1)))) == ((intptr_t)((intptr_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 8897
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return L_3;
	}
}
// Method Definition Index: 8898
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_SetRef_m89BDD13EED80A828682061BEF6D21F334AE45FC7_inline (intptr_t ___0_handle, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = ___1_value;
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		return;
	}
}
// Method Definition Index: 993
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 90421
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_mF3CDC0B64D5037106573C6CEE921EAF0A8B3C8EB_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountAllU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90422
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_mED1939CDEBB184383799328A0C1AEC9E1D2960D9_gshared_inline (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountAllU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 1009
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
