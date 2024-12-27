#include "pch-cpp.hpp"





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

struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
struct Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4;
struct IEnumerator_1_t0424E3E88FE271725BB2D35CC52E921AD1487F0D;
struct List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Assembly_t;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CallerArgumentExpressionAttribute_tD3127EBD7854DD5490A9BEEF07C557FF839CB591;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DynamicallyAccessedMembersAttribute_t32A93E390065BE96AD120568DB033AFF59F9A95C;
struct EmbeddedAttribute_tF17F62C9D7DA6B113CA3A79224FEB5C3E409CBA2;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
struct IServiceCollection_t8A3E94272E3A36C47F44609B05C67D29649366C7;
struct IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6;
struct IServiceScope_t0758A8C38890204C187698991C5958813D35E56E;
struct IServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932;
struct ISupportRequiredService_tDE14BBE64AAE0D65C963F50EDB2D1A710A459C95;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NullableAttribute_t97F9A2D5664B13D882836AC8F74EFAC88AFFC2AF;
struct NullableContextAttribute_t66D75A13A92DBEBB68D303EF11A83C60679628D4;
struct NullablePublicOnlyAttribute_tD766562F61EDE1166F8E2FAD369C1FAB846D4E73;
struct RefSafetyRulesAttribute_t8D85944F7CF74918956CA906D9A0563D5A093019;
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46;
struct ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE;
struct String_t;
struct Type_t;
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;

IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t25A4F8273D1B057CEDAAFF8FF7EDCCF8C35AB65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISupportRequiredService_tDE14BBE64AAE0D65C963F50EDB2D1A710A459C95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceLifetime_tF8E5596558473DD147F0761F5E42386AEF5A815B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1CCEE987CFB65D68EEB5CFFD47445AD2B3C53D62;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral1FD00C6F0B4C9F1E0466E1DD4659F667503F4B04;
IL2CPP_EXTERN_C String_t* _stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral4B550C021151CF7AB3AC6378BA0DD4C2C31D6937;
IL2CPP_EXTERN_C String_t* _stringLiteral554C3DD66F287ABB3CF60D79DBEF38320C1CED02;
IL2CPP_EXTERN_C String_t* _stringLiteral63D6E9AE3EE2FA41B7C1AFB2FA5FADB63675466D;
IL2CPP_EXTERN_C String_t* _stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94;
IL2CPP_EXTERN_C String_t* _stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3;
IL2CPP_EXTERN_C String_t* _stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCAF75F6781FC7A40EF6693F66F651A4F139125;
IL2CPP_EXTERN_C String_t* _stringLiteralDF73B874236192E4304748C8C9159248D7F005AB;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0CEF4B42EE614E21137818EA5804AD5EDF5F53D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1592EE301D733454F2BD7B073EFF10AE91EC48DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m9ED07705287B0069FF3B7421F727B6AB07C8EBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_mE75687C1A327FC38C29A08BCF8D4CEC55727EBF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m29DF236BA9AC2A2F9A2B49CE71F049BA254C8636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m73342F7CEB39885F21D52F343A53B7170850E672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mFF75A04CAC530DEEEF7D80AE70A8DE89E977CD41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m1872C7A25834E5904591573268683B30B543619B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m349F0DF334E8128ECBCE134E03C5F0BF42276D26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD143946698A0DEFDB42A166183C1C4EB07288881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m96843A43C95BD80FFE53BA2045F1EA7EC61BD2DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEB4BB64545EEDF0B0A05030433E1939F85A78925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m87D0E65B375901750E59B0B4195CF79BC6DD5001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceCollection_ThrowReadOnlyException_m7B4FE2C9209C882095436731B7E1F549E15D0EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_m59983201416E5F6CAB9F118DAFAEC75CC5549E26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServiceProviderServiceExtensions_GetRequiredService_m7945406B05E18F4E708FF70EC88787E1DCF80A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_Throw_mBB84A91A089742B544A800B6A15624DFEF477231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t868D65A44E2478CF307DD48140B2BE4CA78A1E9B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t7399C531C9AC8707114947FF6FA34171181470D4 
{
};
struct List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3  : public RuntimeObject
{
	ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000* ____items;
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
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SR_t868D65A44E2478CF307DD48140B2BE4CA78A1E9B  : public RuntimeObject
{
};
struct SR_t80EFA8120943712E1DFED1AA1EE965E253401B43  : public RuntimeObject
{
};
struct ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46  : public RuntimeObject
{
	List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* ____descriptors;
	bool ____isReadOnly;
};
struct ServiceCollectionDescriptorExtensions_t449B4799FA2EA8157046E74D794C2786C09F96E2  : public RuntimeObject
{
};
struct ServiceCollectionServiceExtensions_t984396827B33B0DEA984FF8B797B9C0AA4F4D0BB  : public RuntimeObject
{
};
struct ServiceProviderServiceExtensions_tA45B762CD0A94D5A0AA9EF9ADCF0BC79F41010EF  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ThrowHelper_tE3862A26D457778DB3F6AE81693027E7A0D644D0  : public RuntimeObject
{
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
struct Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8 
{
	List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* ____list;
	int32_t ____index;
	int32_t ____version;
	ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CallerArgumentExpressionAttribute_tD3127EBD7854DD5490A9BEEF07C557FF839CB591  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___U3CParameterNameU3Ek__BackingField;
};
struct EmbeddedAttribute_tF17F62C9D7DA6B113CA3A79224FEB5C3E409CBA2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct NullableAttribute_t97F9A2D5664B13D882836AC8F74EFAC88AFFC2AF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags;
};
struct NullableContextAttribute_t66D75A13A92DBEBB68D303EF11A83C60679628D4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	uint8_t ___Flag;
};
struct NullablePublicOnlyAttribute_tD766562F61EDE1166F8E2FAD369C1FAB846D4E73  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	bool ___IncludesInternals;
};
struct RefSafetyRulesAttribute_t8D85944F7CF74918956CA906D9A0563D5A093019  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___Version;
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
struct DynamicallyAccessedMemberTypes_tA72FCB0FBE638BD74C99DBBA4D6E2AE0B529ABF5 
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
struct MethodInfo_t  : public MethodBase_t
{
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ServiceLifetime_tF8E5596558473DD147F0761F5E42386AEF5A815B 
{
	int32_t ___value__;
};
struct UltimateResourceFallbackLocation_tFA91547D7BF4CEF1101A7C391ECB7B73EE073AB6 
{
	int32_t ___value__;
};
struct DynamicallyAccessedMembersAttribute_t32A93E390065BE96AD120568DB033AFF59F9A95C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___U3CMemberTypesU3Ek__BackingField;
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
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	String_t* ___BaseNameField;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets;
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets;
	String_t* ___moduleDir;
	Assembly_t* ___MainAssembly;
	Type_t* ____locationInfo;
	Type_t* ____userResourceSet;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture;
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache;
	bool ____ignoreCase;
	bool ___UseManifest;
	bool ___UseSatelliteAssem;
	int32_t ____fallbackLoc;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion;
	bool ____lookedForSatelliteContractVersion;
	Assembly_t* ____callingAssembly;
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly;
	RuntimeObject* ___resourceGroveler;
};
struct ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE  : public RuntimeObject
{
	int32_t ___U3CLifetimeU3Ek__BackingField;
	Type_t* ___U3CServiceTypeU3Ek__BackingField;
	Type_t* ___U3CImplementationTypeU3Ek__BackingField;
	RuntimeObject* ___U3CImplementationInstanceU3Ek__BackingField;
	Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* ___U3CImplementationFactoryU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3_StaticFields
{
	ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_StaticFields
{
	bool ___s_usingResourceKeys;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	int32_t ___MagicNumber;
	int32_t ___HeaderVersionNumber;
	Type_t* ____minResourceSet;
	String_t* ___ResReaderTypeName;
	String_t* ___ResSetTypeName;
	String_t* ___MscorlibName;
	int32_t ___DEBUG;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000  : public RuntimeArray
{
	ALIGN_FIELD (8) ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* m_Items[1];

	inline ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* value)
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceProviderServiceExtensions_GetRequiredService_TisIl2CppFullySharedGenericAny_m80FAC720DC5EB54059CB5F47CA94EDC0605DC48C_gshared (RuntimeObject* ___0_provider, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_Throw_mBB84A91A089742B544A800B6A15624DFEF477231 (String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m57412DB50BFFFB2F7D04C5A151FD31757BBFD4C4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mDCED040BA4BE9F2AB06DDF206D96234D3AEAC5C7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7 (String_t* ___0_separator, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___0_resourceSource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mE5EE885A10AF2AB12EB556B970F67CDD22FAB0E1 (String_t* ___0_resourceKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___0_switchName, bool* ___1_isEnabled, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m96843A43C95BD80FFE53BA2045F1EA7EC61BD2DB_inline (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)(__this, method);
}
inline ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* List_1_get_Item_mEB4BB64545EEDF0B0A05030433E1939F85A78925 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) ;
inline void List_1_set_Item_m87D0E65B375901750E59B0B4195CF79BC6DD5001 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, int32_t ___0_index, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny)___1_value, method);
}
inline void List_1_Clear_m1592EE301D733454F2BD7B073EFF10AE91EC48DE_inline (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)(__this, method);
}
inline bool List_1_Contains_m9ED07705287B0069FF3B7421F727B6AB07C8EBC1 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1_CopyTo_mE75687C1A327FC38C29A08BCF8D4CEC55727EBF3 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3*, ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000*, int32_t, const RuntimeMethod*))List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline bool List_1_Remove_m349F0DF334E8128ECBCE134E03C5F0BF42276D26 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8 List_1_GetEnumerator_m29DF236BA9AC2A2F9A2B49CE71F049BA254C8636 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, const RuntimeMethod* method)
{
	Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void List_1_Add_m0CEF4B42EE614E21137818EA5804AD5EDF5F53D0_inline (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollection_GetEnumerator_m82B5BBF14E9C44F14E038DBE1F978272655EF895 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_m73342F7CEB39885F21D52F343A53B7170850E672 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1_Insert_mFF75A04CAC530DEEEF7D80AE70A8DE89E977CD41 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, int32_t ___0_index, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny)___1_item, method);
}
inline void List_1_RemoveAt_m1872C7A25834E5904591573268683B30B543619B (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_ThrowReadOnlyException_m7B4FE2C9209C882095436731B7E1F549E15D0EB2 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ServiceCollectionReadOnly_m01653F2D7BC87471032E67C9C8B4B493CD324CE9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void List_1__ctor_mD143946698A0DEFDB42A166183C1C4EB07288881 (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B (RuntimeObject* ___0_argument, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_Add_mD5AEDEFB4BFF3A47DDB4DCBD8A6C6D17DEF124B6 (RuntimeObject* ___0_collection, Type_t* ___1_serviceType, Type_t* ___2_implementationType, int32_t ___3_lifetime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m91BE361EEAE4DDB8EB7E7476130951154B48D1C2 (RuntimeObject* ___0_services, Type_t* ___1_serviceType, Type_t* ___2_implementationType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m996867A0F3FA2BCF82F21CFA0962362A7B5A5259 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, Type_t* ___0_serviceType, RuntimeObject* ___1_instance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m84A1D0AED0B0E29DF6E5C00A70F46192CD5649DD (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, Type_t* ___0_serviceType, Type_t* ___1_implementationType, int32_t ___2_lifetime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m5EB0C7BC115735ABCBF36C31FE7EB4128C76BCE3 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, Type_t* ___0_serviceType, int32_t ___1_lifetime, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ServiceDescriptor_get_ServiceType_m58594D17CA943A5C935524123890EB2907FD7556_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServiceDescriptor_get_Lifetime_mF5CC52F90D7A16272E4AC41ABF857586F5932C61_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ServiceDescriptor_get_ImplementationType_m839719EB654E7A83ACE7596D3805E411D25FEF72_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* ServiceDescriptor_get_ImplementationFactory_mFD0530062F7593DC0E608DEFB06E4CD16CBA0A6D_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_get_ImplementationInstance_m0BA8DD47A6538A8103B569309CE2CA21381F1037_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NoServiceRegistered_mBE8DAE2E906DD01140C56A47773A4C4344D786AC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mD18A3DAD68F66F971CA6B573D34831045BE7CF7F (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
inline RuntimeObject* ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_m59983201416E5F6CAB9F118DAFAEC75CC5549E26 (RuntimeObject* ___0_provider, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ServiceProviderServiceExtensions_GetRequiredService_TisIl2CppFullySharedGenericAny_m80FAC720DC5EB54059CB5F47CA94EDC0605DC48C_gshared)(___0_provider, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
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
// Method Definition Index: 137689
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m2C1631A10790E7E74A56AC53102B4CBE2DDCD317 (EmbeddedAttribute_tF17F62C9D7DA6B113CA3A79224FEB5C3E409CBA2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Method Definition Index: 137690
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m9AB59F7849E9D66904E8CA3A8D1C76CEC54238C3 (NullableAttribute_t97F9A2D5664B13D882836AC8F74EFAC88AFFC2AF* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_1);
		return;
	}
}
// Method Definition Index: 137691
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m00A8A7716408D61501E23C0F75B58F4C9495155C (NullableAttribute_t97F9A2D5664B13D882836AC8F74EFAC88AFFC2AF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		__this->___NullableFlags = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags), (void*)L_0);
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
// Method Definition Index: 137692
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_mEADB8877D5E4A9D26F937EE97BA0BD03D9F7CADB (NullableContextAttribute_t66D75A13A92DBEBB68D303EF11A83C60679628D4* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag = L_0;
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
// Method Definition Index: 137693
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m184D8B62C71A8CAC07D5FD2B2FE999C8EA844B0B (NullablePublicOnlyAttribute_tD766562F61EDE1166F8E2FAD369C1FAB846D4E73* __this, bool ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___0_p;
		__this->___IncludesInternals = L_0;
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
// Method Definition Index: 137694
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_mC2A8765CE9E4490D36C9B0B9A13A3BEB4344825E (RefSafetyRulesAttribute_t8D85944F7CF74918956CA906D9A0563D5A093019* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_p;
		__this->___Version = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 137695
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B (RuntimeObject* ___0_argument, String_t* ___1_paramName, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_argument;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___1_paramName;
		ThrowHelper_Throw_mBB84A91A089742B544A800B6A15624DFEF477231(L_1, NULL);
	}

IL_0009:
	{
		return;
	}
}
// Method Definition Index: 137696
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_Throw_mBB84A91A089742B544A800B6A15624DFEF477231 (String_t* ___0_paramName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_paramName;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_Throw_mBB84A91A089742B544A800B6A15624DFEF477231_RuntimeMethod_var)));
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
// Method Definition Index: 137697
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m57412DB50BFFFB2F7D04C5A151FD31757BBFD4C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_StaticFields*)il2cpp_codegen_static_fields_for(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var))->___s_usingResourceKeys;
		return L_0;
	}
}
// Method Definition Index: 137698
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mE5EE885A10AF2AB12EB556B970F67CDD22FAB0E1 (String_t* ___0_resourceKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m57412DB50BFFFB2F7D04C5A151FD31757BBFD4C4_inline(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___0_resourceKey;
		return L_1;
	}

IL_0009:
	{
		V_0 = (String_t*)NULL;
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_2;
		L_2 = SR_get_ResourceManager_mDCED040BA4BE9F2AB06DDF206D96234D3AEAC5C7(NULL);
		String_t* L_3 = ___0_resourceKey;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7, L_2, L_3);
		V_0 = L_4;
		goto IL_001c;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD* L_5 = ((MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001c;
	}

IL_001c:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 137699
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mD18A3DAD68F66F971CA6B573D34831045BE7CF7F (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m57412DB50BFFFB2F7D04C5A151FD31757BBFD4C4_inline(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_resourceFormat;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_p1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___0_resourceFormat;
		RuntimeObject* L_8 = ___1_p1;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_7, L_8, NULL);
		return L_9;
	}
}
// Method Definition Index: 137700
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mDCED040BA4BE9F2AB06DDF206D96234D3AEAC5C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t868D65A44E2478CF307DD48140B2BE4CA78A1E9B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_StaticFields*)il2cpp_codegen_static_fields_for(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var))->___s_resourceManager;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
		G_B1_0 = L_1;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_t868D65A44E2478CF307DD48140B2BE4CA78A1E9B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		((SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_StaticFields*)il2cpp_codegen_static_fields_for(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var))->___s_resourceManager = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_StaticFields*)il2cpp_codegen_static_fields_for(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var))->___s_resourceManager), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// Method Definition Index: 137701
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NoServiceRegistered_mBE8DAE2E906DD01140C56A47773A4C4344D786AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral554C3DD66F287ABB3CF60D79DBEF38320C1CED02);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mE5EE885A10AF2AB12EB556B970F67CDD22FAB0E1(_stringLiteral554C3DD66F287ABB3CF60D79DBEF38320C1CED02, NULL);
		return L_0;
	}
}
// Method Definition Index: 137702
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ServiceCollectionReadOnly_m01653F2D7BC87471032E67C9C8B4B493CD324CE9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B550C021151CF7AB3AC6378BA0DD4C2C31D6937);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mE5EE885A10AF2AB12EB556B970F67CDD22FAB0E1(_stringLiteral4B550C021151CF7AB3AC6378BA0DD4C2C31D6937, NULL);
		return L_0;
	}
}
// Method Definition Index: 137703
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m0CBBBF596A9324D9B5D6116710AF60DE2AE75371 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78(_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6, (&V_0), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		bool L_1 = V_0;
		G_B3_0 = ((int32_t)(L_1));
	}

IL_0012:
	{
		((SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_StaticFields*)il2cpp_codegen_static_fields_for(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var))->___s_usingResourceKeys = (bool)G_B3_0;
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
// Method Definition Index: 137704
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicallyAccessedMembersAttribute__ctor_m8DC98DD6330D496C01DFB982D670488D4CB81888 (DynamicallyAccessedMembersAttribute_t32A93E390065BE96AD120568DB033AFF59F9A95C* __this, int32_t ___0_memberTypes, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_memberTypes;
		__this->___U3CMemberTypesU3Ek__BackingField = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 137705
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallerArgumentExpressionAttribute__ctor_mE7313B2C785FE89FE15212602238022A3CC3BCEA (CallerArgumentExpressionAttribute_tD3127EBD7854DD5490A9BEEF07C557FF839CB591* __this, String_t* ___0_parameterName, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_parameterName;
		__this->___U3CParameterNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterNameU3Ek__BackingField), (void*)L_0);
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
// Method Definition Index: 137709
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServiceCollection_get_Count_m05967AB825119F89998DE70777A108D79F6C5F2F (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m96843A43C95BD80FFE53BA2045F1EA7EC61BD2DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m96843A43C95BD80FFE53BA2045F1EA7EC61BD2DB_inline(L_0, List_1_get_Count_m96843A43C95BD80FFE53BA2045F1EA7EC61BD2DB_RuntimeMethod_var);
		return L_1;
	}
}
// Method Definition Index: 137710
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceCollection_get_IsReadOnly_m103CACAE6CB6341A84670973CD9DA52452E9A1E8 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isReadOnly;
		return L_0;
	}
}
// Method Definition Index: 137711
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ServiceCollection_get_Item_mD28F1FB30F3B9993F8626381158CF0110996DCCE (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEB4BB64545EEDF0B0A05030433E1939F85A78925_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_2;
		L_2 = List_1_get_Item_mEB4BB64545EEDF0B0A05030433E1939F85A78925(L_0, L_1, List_1_get_Item_mEB4BB64545EEDF0B0A05030433E1939F85A78925_RuntimeMethod_var);
		return L_2;
	}
}
// Method Definition Index: 137712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_set_Item_m4F48D76AC1288E701B20E3E5B16EB5C666FCBD66 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, int32_t ___0_index, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m87D0E65B375901750E59B0B4195CF79BC6DD5001_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074(__this, NULL);
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		int32_t L_1 = ___0_index;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_2 = ___1_value;
		NullCheck(L_0);
		List_1_set_Item_m87D0E65B375901750E59B0B4195CF79BC6DD5001(L_0, L_1, L_2, List_1_set_Item_m87D0E65B375901750E59B0B4195CF79BC6DD5001_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 137713
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_Clear_mEBA5417FBF6AE1F29DC82EDD120E3B2F55E9BEAF (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1592EE301D733454F2BD7B073EFF10AE91EC48DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074(__this, NULL);
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		NullCheck(L_0);
		List_1_Clear_m1592EE301D733454F2BD7B073EFF10AE91EC48DE_inline(L_0, List_1_Clear_m1592EE301D733454F2BD7B073EFF10AE91EC48DE_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 137714
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceCollection_Contains_mB9BD9D75AC6F1E378973C60DED3DBF14FA1440E0 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m9ED07705287B0069FF3B7421F727B6AB07C8EBC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_1 = ___0_item;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m9ED07705287B0069FF3B7421F727B6AB07C8EBC1(L_0, L_1, List_1_Contains_m9ED07705287B0069FF3B7421F727B6AB07C8EBC1_RuntimeMethod_var);
		return L_2;
	}
}
// Method Definition Index: 137715
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_CopyTo_mCBC24B13A7A773430BAD09938EFFC6B5E7B28415 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_mE75687C1A327FC38C29A08BCF8D4CEC55727EBF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		ServiceDescriptorU5BU5D_tE9B75E81D0761080899C996871488F940A86B000* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		NullCheck(L_0);
		List_1_CopyTo_mE75687C1A327FC38C29A08BCF8D4CEC55727EBF3(L_0, L_1, L_2, List_1_CopyTo_mE75687C1A327FC38C29A08BCF8D4CEC55727EBF3_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 137716
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServiceCollection_Remove_m155958DA22E6D320AEB85DE3BCFD1C8C5B22CEAF (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m349F0DF334E8128ECBCE134E03C5F0BF42276D26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074(__this, NULL);
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_1 = ___0_item;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m349F0DF334E8128ECBCE134E03C5F0BF42276D26(L_0, L_1, List_1_Remove_m349F0DF334E8128ECBCE134E03C5F0BF42276D26_RuntimeMethod_var);
		return L_2;
	}
}
// Method Definition Index: 137717
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollection_GetEnumerator_m82B5BBF14E9C44F14E038DBE1F978272655EF895 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m29DF236BA9AC2A2F9A2B49CE71F049BA254C8636_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		NullCheck(L_0);
		Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8 L_1;
		L_1 = List_1_GetEnumerator_m29DF236BA9AC2A2F9A2B49CE71F049BA254C8636(L_0, List_1_GetEnumerator_m29DF236BA9AC2A2F9A2B49CE71F049BA254C8636_RuntimeMethod_var);
		Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t250A23D8E48506C90575EEF0FD41306BA11CBFA8_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// Method Definition Index: 137718
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_System_Collections_Generic_ICollectionU3CMicrosoft_Extensions_DependencyInjection_ServiceDescriptorU3E_Add_m8CFE196A3E4EE064EAE8D07C4E460D19ECC325A1 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0CEF4B42EE614E21137818EA5804AD5EDF5F53D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074(__this, NULL);
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_1 = ___0_item;
		NullCheck(L_0);
		List_1_Add_m0CEF4B42EE614E21137818EA5804AD5EDF5F53D0_inline(L_0, L_1, List_1_Add_m0CEF4B42EE614E21137818EA5804AD5EDF5F53D0_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 137719
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollection_System_Collections_IEnumerable_GetEnumerator_m626893ED7407128291F4E181C1F5328290D410EC (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ServiceCollection_GetEnumerator_m82B5BBF14E9C44F14E038DBE1F978272655EF895(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 137720
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServiceCollection_IndexOf_mB2AD2230AFCEF65886C1B4B766CDDF247F60B5C3 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m73342F7CEB39885F21D52F343A53B7170850E672_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_1 = ___0_item;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m73342F7CEB39885F21D52F343A53B7170850E672(L_0, L_1, List_1_IndexOf_m73342F7CEB39885F21D52F343A53B7170850E672_RuntimeMethod_var);
		return L_2;
	}
}
// Method Definition Index: 137721
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_Insert_m8C948BE89FEB80B136D2894EEC36BF7415D064C4 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, int32_t ___0_index, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___1_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mFF75A04CAC530DEEEF7D80AE70A8DE89E977CD41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074(__this, NULL);
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		int32_t L_1 = ___0_index;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_2 = ___1_item;
		NullCheck(L_0);
		List_1_Insert_mFF75A04CAC530DEEEF7D80AE70A8DE89E977CD41(L_0, L_1, L_2, List_1_Insert_mFF75A04CAC530DEEEF7D80AE70A8DE89E977CD41_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 137722
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_RemoveAt_mE18CCAAED6EB8A10E0BB7DD68E7DB38849C65311 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m1872C7A25834E5904591573268683B30B543619B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074(__this, NULL);
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = __this->____descriptors;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		List_1_RemoveAt_m1872C7A25834E5904591573268683B30B543619B(L_0, L_1, List_1_RemoveAt_m1872C7A25834E5904591573268683B30B543619B_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 137723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_CheckReadOnly_mB6DE5CAEEB8526850C78949C2E6B1DCCDB683074 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isReadOnly;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ServiceCollection_ThrowReadOnlyException_m7B4FE2C9209C882095436731B7E1F549E15D0EB2(NULL);
	}

IL_000d:
	{
		return;
	}
}
// Method Definition Index: 137724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection_ThrowReadOnlyException_m7B4FE2C9209C882095436731B7E1F549E15D0EB2 (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var)));
		String_t* L_0;
		L_0 = SR_get_ServiceCollectionReadOnly_m01653F2D7BC87471032E67C9C8B4B493CD324CE9(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceCollection_ThrowReadOnlyException_m7B4FE2C9209C882095436731B7E1F549E15D0EB2_RuntimeMethod_var)));
	}
}
// Method Definition Index: 137725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollection__ctor_mDBDC238024ACED65A928C3C8FA868399C93D2514 (ServiceCollection_t9E533C9936B1589C704F8FEC9CD22780CA9DBC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD143946698A0DEFDB42A166183C1C4EB07288881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3* L_0 = (List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3*)il2cpp_codegen_object_new(List_1_tD3FED3AFC7AC85A74069D730D67D1960240A8DE3_il2cpp_TypeInfo_var);
		List_1__ctor_mD143946698A0DEFDB42A166183C1C4EB07288881(L_0, List_1__ctor_mD143946698A0DEFDB42A166183C1C4EB07288881_RuntimeMethod_var);
		__this->____descriptors = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____descriptors), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 137726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m91BE361EEAE4DDB8EB7E7476130951154B48D1C2 (RuntimeObject* ___0_services, Type_t* ___1_serviceType, Type_t* ___2_implementationType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_services;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_0, _stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843, NULL);
		Type_t* L_1 = ___1_serviceType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_1, _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3, NULL);
		Type_t* L_2 = ___2_implementationType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_2, _stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94, NULL);
		RuntimeObject* L_3 = ___0_services;
		Type_t* L_4 = ___1_serviceType;
		Type_t* L_5 = ___2_implementationType;
		RuntimeObject* L_6;
		L_6 = ServiceCollectionServiceExtensions_Add_mD5AEDEFB4BFF3A47DDB4DCBD8A6C6D17DEF124B6(L_3, L_4, L_5, 0, NULL);
		return L_6;
	}
}
// Method Definition Index: 137728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_mC00FF373273DF26BBEA781F28B430B4BE7BFFA90 (RuntimeObject* ___0_services, Type_t* ___1_serviceType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_services;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_0, _stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843, NULL);
		Type_t* L_1 = ___1_serviceType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_1, _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3, NULL);
		RuntimeObject* L_2 = ___0_services;
		Type_t* L_3 = ___1_serviceType;
		Type_t* L_4 = ___1_serviceType;
		RuntimeObject* L_5;
		L_5 = ServiceCollectionServiceExtensions_AddSingleton_m91BE361EEAE4DDB8EB7E7476130951154B48D1C2(L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 137730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m025598643CF82EBD59FC1F2309A0C4EA902F8686 (RuntimeObject* ___0_services, Type_t* ___1_serviceType, RuntimeObject* ___2_implementationInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FD00C6F0B4C9F1E0466E1DD4659F667503F4B04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_services;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_0, _stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843, NULL);
		Type_t* L_1 = ___1_serviceType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_1, _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3, NULL);
		RuntimeObject* L_2 = ___2_implementationInstance;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_2, _stringLiteral1FD00C6F0B4C9F1E0466E1DD4659F667503F4B04, NULL);
		Type_t* L_3 = ___1_serviceType;
		RuntimeObject* L_4 = ___2_implementationInstance;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_5 = (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE*)il2cpp_codegen_object_new(ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m996867A0F3FA2BCF82F21CFA0962362A7B5A5259(L_5, L_3, L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6 = ___0_services;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_7 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* >::Invoke(2, ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = ___0_services;
		return L_8;
	}
}
// Method Definition Index: 137732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_Add_mD5AEDEFB4BFF3A47DDB4DCBD8A6C6D17DEF124B6 (RuntimeObject* ___0_collection, Type_t* ___1_serviceType, Type_t* ___2_implementationType, int32_t ___3_lifetime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* V_0 = NULL;
	{
		Type_t* L_0 = ___1_serviceType;
		Type_t* L_1 = ___2_implementationType;
		int32_t L_2 = ___3_lifetime;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_3 = (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE*)il2cpp_codegen_object_new(ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE_il2cpp_TypeInfo_var);
		ServiceDescriptor__ctor_m84A1D0AED0B0E29DF6E5C00A70F46192CD5649DD(L_3, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = ___0_collection;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* >::Invoke(2, ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___0_collection;
		return L_6;
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
// Method Definition Index: 137733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m84A1D0AED0B0E29DF6E5C00A70F46192CD5649DD (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, Type_t* ___0_serviceType, Type_t* ___1_implementationType, int32_t ___2_lifetime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_serviceType;
		int32_t L_1 = ___2_lifetime;
		ServiceDescriptor__ctor_m5EB0C7BC115735ABCBF36C31FE7EB4128C76BCE3(__this, L_0, L_1, NULL);
		Type_t* L_2 = ___0_serviceType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_2, _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3, NULL);
		Type_t* L_3 = ___1_implementationType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_3, _stringLiteral72021B304EBE762D77D1E2DFE9B2180DE3BBBD94, NULL);
		Type_t* L_4 = ___1_implementationType;
		__this->___U3CImplementationTypeU3Ek__BackingField = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImplementationTypeU3Ek__BackingField), (void*)L_4);
		return;
	}
}
// Method Definition Index: 137734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m996867A0F3FA2BCF82F21CFA0962362A7B5A5259 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, Type_t* ___0_serviceType, RuntimeObject* ___1_instance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_serviceType;
		ServiceDescriptor__ctor_m5EB0C7BC115735ABCBF36C31FE7EB4128C76BCE3(__this, L_0, 0, NULL);
		Type_t* L_1 = ___0_serviceType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_1, _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3, NULL);
		RuntimeObject* L_2 = ___1_instance;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_2, _stringLiteralAA236E134566FACF682D16CDBC3E2C735E0EF19D, NULL);
		RuntimeObject* L_3 = ___1_instance;
		__this->___U3CImplementationInstanceU3Ek__BackingField = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImplementationInstanceU3Ek__BackingField), (void*)L_3);
		return;
	}
}
// Method Definition Index: 137735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m448E36DAF872D048B24FA894F4D2BA5482A7AF12 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, Type_t* ___0_serviceType, Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* ___1_factory, int32_t ___2_lifetime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_serviceType;
		int32_t L_1 = ___2_lifetime;
		ServiceDescriptor__ctor_m5EB0C7BC115735ABCBF36C31FE7EB4128C76BCE3(__this, L_0, L_1, NULL);
		Type_t* L_2 = ___0_serviceType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_2, _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3, NULL);
		Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* L_3 = ___1_factory;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_3, _stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D, NULL);
		Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* L_4 = ___1_factory;
		__this->___U3CImplementationFactoryU3Ek__BackingField = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImplementationFactoryU3Ek__BackingField), (void*)L_4);
		return;
	}
}
// Method Definition Index: 137736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceDescriptor__ctor_m5EB0C7BC115735ABCBF36C31FE7EB4128C76BCE3 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, Type_t* ___0_serviceType, int32_t ___1_lifetime, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_lifetime;
		__this->___U3CLifetimeU3Ek__BackingField = L_0;
		Type_t* L_1 = ___0_serviceType;
		__this->___U3CServiceTypeU3Ek__BackingField = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServiceTypeU3Ek__BackingField), (void*)L_1);
		return;
	}
}
// Method Definition Index: 137737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ServiceDescriptor_get_Lifetime_mF5CC52F90D7A16272E4AC41ABF857586F5932C61 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLifetimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ServiceDescriptor_get_ServiceType_m58594D17CA943A5C935524123890EB2907FD7556 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CServiceTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ServiceDescriptor_get_ImplementationType_m839719EB654E7A83ACE7596D3805E411D25FEF72 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CImplementationTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_get_ImplementationInstance_m0BA8DD47A6538A8103B569309CE2CA21381F1037 (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CImplementationInstanceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* ServiceDescriptor_get_ImplementationFactory_mFD0530062F7593DC0E608DEFB06E4CD16CBA0A6D (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* L_0 = __this->___U3CImplementationFactoryU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceDescriptor_ToString_mA84A2B8C8DC6BCD7E31FDE1D61D2F026AF7BA76D (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceLifetime_tF8E5596558473DD147F0761F5E42386AEF5A815B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CCEE987CFB65D68EEB5CFFD47445AD2B3C53D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D6E9AE3EE2FA41B7C1AFB2FA5FADB63675466D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCAF75F6781FC7A40EF6693F66F651A4F139125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF73B874236192E4304748C8C9159248D7F005AB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral4027EB6DEAA9950CB5AAE5982F01F90152DF2EE6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Type_t* L_3;
		L_3 = ServiceDescriptor_get_ServiceType_m58594D17CA943A5C935524123890EB2907FD7556_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral76DEA610DFCED3B7842C7C70A5255AEFA2383CAD);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6;
		L_6 = ServiceDescriptor_get_Lifetime_mF5CC52F90D7A16272E4AC41ABF857586F5932C61_inline(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(ServiceLifetime_tF8E5596558473DD147F0761F5E42386AEF5A815B_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		String_t* L_9;
		L_9 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralDF73B874236192E4304748C8C9159248D7F005AB, L_5, NULL);
		V_0 = L_9;
		Type_t* L_10;
		L_10 = ServiceDescriptor_get_ImplementationType_m839719EB654E7A83ACE7596D3805E411D25FEF72_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_10, (Type_t*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_12 = V_0;
		Type_t* L_13;
		L_13 = ServiceDescriptor_get_ImplementationType_m839719EB654E7A83ACE7596D3805E411D25FEF72_inline(__this, NULL);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, _stringLiteral1CCEE987CFB65D68EEB5CFFD47445AD2B3C53D62, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, L_14, NULL);
		return L_15;
	}

IL_0062:
	{
		Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* L_16;
		L_16 = ServiceDescriptor_get_ImplementationFactory_mFD0530062F7593DC0E608DEFB06E4CD16CBA0A6D_inline(__this, NULL);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_17 = V_0;
		Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* L_18;
		L_18 = ServiceDescriptor_get_ImplementationFactory_mFD0530062F7593DC0E608DEFB06E4CD16CBA0A6D_inline(__this, NULL);
		NullCheck(L_18);
		MethodInfo_t* L_19;
		L_19 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_18, NULL);
		String_t* L_20;
		L_20 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, _stringLiteralCCCAF75F6781FC7A40EF6693F66F651A4F139125, L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, L_20, NULL);
		return L_21;
	}

IL_008b:
	{
		String_t* L_22 = V_0;
		RuntimeObject* L_23;
		L_23 = ServiceDescriptor_get_ImplementationInstance_m0BA8DD47A6538A8103B569309CE2CA21381F1037_inline(__this, NULL);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, _stringLiteral63D6E9AE3EE2FA41B7C1AFB2FA5FADB63675466D, L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, L_24, NULL);
		return L_25;
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
// Method Definition Index: 137744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceProviderServiceExtensions_GetRequiredService_m7945406B05E18F4E708FF70EC88787E1DCF80A16 (RuntimeObject* ___0_provider, Type_t* ___1_serviceType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISupportRequiredService_tDE14BBE64AAE0D65C963F50EDB2D1A710A459C95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_provider;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_0, _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5, NULL);
		Type_t* L_1 = ___1_serviceType;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_1, _stringLiteral7CF07A82A6183049D3E36912C678E6C35C021BE3, NULL);
		RuntimeObject* L_2 = ___0_provider;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ISupportRequiredService_tDE14BBE64AAE0D65C963F50EDB2D1A710A459C95_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		Type_t* L_5 = ___1_serviceType;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0, ISupportRequiredService_tDE14BBE64AAE0D65C963F50EDB2D1A710A459C95_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_provider;
		Type_t* L_8 = ___1_serviceType;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0, IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var, L_7, L_8);
		V_1 = L_9;
		RuntimeObject* L_10 = V_1;
		if (L_10)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var)));
		String_t* L_11;
		L_11 = SR_get_NoServiceRegistered_mBE8DAE2E906DD01140C56A47773A4C4344D786AC(NULL);
		Type_t* L_12 = ___1_serviceType;
		String_t* L_13;
		L_13 = SR_Format_mD18A3DAD68F66F971CA6B573D34831045BE7CF7F(L_11, L_12, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServiceProviderServiceExtensions_GetRequiredService_m7945406B05E18F4E708FF70EC88787E1DCF80A16_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_15 = V_1;
		return L_15;
	}
}
// Method Definition Index: 137746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceProviderServiceExtensions_CreateScope_mBBBBF5B9E7AC1A4B13332DC00FFD9617FA84F7F6 (RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_m59983201416E5F6CAB9F118DAFAEC75CC5549E26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_provider;
		RuntimeObject* L_1;
		L_1 = ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_m59983201416E5F6CAB9F118DAFAEC75CC5549E26(L_0, ServiceProviderServiceExtensions_GetRequiredService_TisIServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_m59983201416E5F6CAB9F118DAFAEC75CC5549E26_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IServiceScopeFactory_t03B1BE4A62ECEB1691CAB6ED0B9FF688FF856932_il2cpp_TypeInfo_var, L_1);
		return L_2;
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
// Method Definition Index: 137747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAdd_m450939AAABAE677BB8FC23BCC85E5C8E11F675D0 (RuntimeObject* ___0_collection, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___1_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t25A4F8273D1B057CEDAAFF8FF7EDCCF8C35AB65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_collection;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_0, _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25, NULL);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_1 = ___1_descriptor;
		ThrowHelper_ThrowIfNull_mEA6A53582FA4A5B3E58A9DDA335684D056F77F1B(L_1, _stringLiteral7A4A6E2A7090298F814A9D44C89F8634249BEF07, NULL);
		RuntimeObject* L_2 = ___0_collection;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		V_1 = 0;
		goto IL_003f;
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___0_collection;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_6;
		L_6 = InterfaceFuncInvoker1< ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE*, int32_t >::Invoke(0, IList_1_t25A4F8273D1B057CEDAAFF8FF7EDCCF8C35AB65E_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = ServiceDescriptor_get_ServiceType_m58594D17CA943A5C935524123890EB2907FD7556_inline(L_6, NULL);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_8 = ___1_descriptor;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = ServiceDescriptor_get_ServiceType_m58594D17CA943A5C935524123890EB2907FD7556_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_14 = ___0_collection;
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_15 = ___1_descriptor;
		NullCheck(L_14);
		InterfaceActionInvoker1< ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* >::Invoke(2, ICollection_1_t83861895F34DB56CBA180B4DEAD9BD3CFEB04778_il2cpp_TypeInfo_var, L_14, L_15);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 137697
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m57412DB50BFFFB2F7D04C5A151FD31757BBFD4C4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_StaticFields*)il2cpp_codegen_static_fields_for(SR_t80EFA8120943712E1DFED1AA1EE965E253401B43_il2cpp_TypeInfo_var))->___s_usingResourceKeys;
		return L_0;
	}
}
// Method Definition Index: 137738
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ServiceDescriptor_get_ServiceType_m58594D17CA943A5C935524123890EB2907FD7556_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CServiceTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137737
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ServiceDescriptor_get_Lifetime_mF5CC52F90D7A16272E4AC41ABF857586F5932C61_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLifetimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137739
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ServiceDescriptor_get_ImplementationType_m839719EB654E7A83ACE7596D3805E411D25FEF72_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CImplementationTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137741
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* ServiceDescriptor_get_ImplementationFactory_mFD0530062F7593DC0E608DEFB06E4CD16CBA0A6D_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* L_0 = __this->___U3CImplementationFactoryU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 137740
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServiceDescriptor_get_ImplementationInstance_m0BA8DD47A6538A8103B569309CE2CA21381F1037_inline (ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CImplementationInstanceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 12373
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
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
