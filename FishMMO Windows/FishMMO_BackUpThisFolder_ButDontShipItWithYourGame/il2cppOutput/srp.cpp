#include "pch-cpp.hpp"





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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79;
struct Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F;
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1;
struct Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051;
struct Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IEnumerable_1_t2B4E44F9701614A6FDC94930DE963353D1C77DB3;
struct IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513;
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A;
struct SrpHash_1_t222E115E9AAFFF86943780EE1F35E709C76B55A2;
struct SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31;
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631;
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C;
struct SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D;
struct SrpConstants_t3A6A0A0FA0867C0607F18FA860821449D96CF5AF;
struct SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E;
struct SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297;
struct SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936;
struct SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61;
struct SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF;
struct SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D;
struct U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9;
struct SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral176DA6D89FF353B23314390F0748EB6A0259FDFC;
IL2CPP_EXTERN_C String_t* _stringLiteral1B2D7511A821D674145BF3085A56453C013F6494;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral41AF6DB1A82C1DA0958117DE79B3F001D8D52F02;
IL2CPP_EXTERN_C String_t* _stringLiteral56492DE44E356F6B1FF79944250E03169B492759;
IL2CPP_EXTERN_C String_t* _stringLiteral57C2411D7466EB3172B6ADBF471154844F8FEA55;
IL2CPP_EXTERN_C String_t* _stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45;
IL2CPP_EXTERN_C String_t* _stringLiteral65C826DB21F31B73C0D297B55A67571647E7FB9C;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral7A37DFFFDF7BE83D63C42F7427DDFEA9B5197E1B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral89487254CCF55296ACC80B8660A14ADE141E6868;
IL2CPP_EXTERN_C String_t* _stringLiteral8B3CFB4B560123030AE265CBD62C0BE39E1D8EC6;
IL2CPP_EXTERN_C String_t* _stringLiteralB850E6E333A8B753C01D34933AE43C5896C2306F;
IL2CPP_EXTERN_C String_t* _stringLiteralC55AFFA4599D7E7F1FE45BF21D72FD8E0E12E4B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD431DA333CF96CF017F2C2FE0CE09A07D97C41C8;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDEE1886E28BAF182807F0FFF257BA126273EF85A;
IL2CPP_EXTERN_C String_t* _stringLiteralE004F8A0E5DDDC4238F9402594F1B9C0C2566D58;
IL2CPP_EXTERN_C String_t* _stringLiteralE9C051F84CAF3A82F6A64F22417D7A8BE21E7139;
IL2CPP_EXTERN_C String_t* _stringLiteralEBA3D3B07EEC9FBCD2EA3EB3B62DD2B403AA9E2F;
IL2CPP_EXTERN_C String_t* _stringLiteralED7AEC2C0E0771DCB063F77236103A79923FE0FB;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A241E77F61CB9A9B0F5FC63BEEA0A820FB5E9A;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Max_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF8C5BEF1479CEA359F3F48C89EE03785DA25473F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBB23C1C1804A5D1F55F962CB1C1CA67DF342BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SkipWhile_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54805BF43B3E720A881937F99A6561CAEF6E62A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mDD32BE2D76C38E6625EC91057D33A62CEA841325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m5DF27F4DE76EF53E4A57929094E9E70113DD3A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SrpClient_DeriveSession_mEF09DA398F6851803E1E9BFBBD7EDF5330FDF379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SrpClient_VerifySession_m28E9F23202E0D22BBA6ED2E6D8982F83615C1D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SrpHash_1__ctor_mBAA7B29090E0A9064FA23146834FD6100840D9DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SrpInteger_RandomInteger_mDEF05584F2E1385AA46CE823D610B3E52415CA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SrpParameters_U3C_ctorU3Eb__1_0_m6E21EF160DBCB645CDD5BF2BFC35F3AFD07F0819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SrpServer_DeriveSession_m59047BDBE480479CDB849DF3A1C982A2F4B2A18F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCombineU3Eb__18_0_m221CC4A195666F417C8814715A8977C9F7B140A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CComputeHashU3Eb__6_0_m40D7BD2AEF154BB99392CFC55920CB203C993533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CMaxU3Eb__15_0_m1995FB6A75EFDFF3CB55310F9ED81CB46282FE25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToByteArrayU3Eb__19_0_m7AD9AB5A706A038F6D257B62C907E194E4E334CE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5E686A5AEB00A97A730CB9B9B9B8CDC7C77E0ECA 
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	bool ____disposed;
	int32_t ___HashSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue;
	int32_t ___State;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};
struct SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D  : public RuntimeObject
{
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___U3CParametersU3Ek__BackingField;
};
struct SrpConstants_t3A6A0A0FA0867C0607F18FA860821449D96CF5AF  : public RuntimeObject
{
};
struct SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E  : public RuntimeObject
{
	String_t* ___U3CPublicU3Ek__BackingField;
	String_t* ___U3CSecretU3Ek__BackingField;
};
struct SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297  : public RuntimeObject
{
	Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* ___U3CHasherFactoryU3Ek__BackingField;
	String_t* ___U3CAlgorithmNameU3Ek__BackingField;
};
struct SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF  : public RuntimeObject
{
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___U3CParametersU3Ek__BackingField;
};
struct SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F  : public RuntimeObject
{
	String_t* ___U3CKeyU3Ek__BackingField;
	String_t* ___U3CProofU3Ek__BackingField;
};
struct SrpUtility_t47FBA366C7A9659515C53656E3B2A8BAB4A03A68  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D  : public RuntimeObject
{
};
struct U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9  : public RuntimeObject
{
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;
struct SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31  : public SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297
{
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
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
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936  : public RuntimeObject
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CValueU3Ek__BackingField;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CHexLengthU3Ek__BackingField;
};
struct SrpRevision_t1F68C99241F345A786B5F0207F0121F15BDE4E11 
{
	int32_t ___value__;
};
struct Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F 
{
	bool ___hasValue;
	int32_t ___value;
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
struct SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61  : public RuntimeObject
{
	int32_t ___U3CPaddedLengthU3Ek__BackingField;
	int32_t ___U3CRevisionU3Ek__BackingField;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___U3CPrimeU3Ek__BackingField;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___U3CGeneratorU3Ek__BackingField;
	RuntimeObject* ___U3CHasherU3Ek__BackingField;
	Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* ___U3CPadU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79  : public MulticastDelegate_t
{
};
struct Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F  : public MulticastDelegate_t
{
};
struct Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1  : public MulticastDelegate_t
{
};
struct Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051  : public MulticastDelegate_t
{
};
struct Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ___permissionState;
};
struct SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97  : public MulticastDelegate_t
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CEmptyBufferU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields
{
	U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* ___U3CU3E9;
	Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* ___U3CU3E9__6_0;
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* ___U3CU3E9__18_0;
};
struct U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields
{
	U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* ___U3CU3E9;
	Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* ___U3CU3E9__15_0;
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___U3CU3E9__19_0;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_StaticFields
{
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___U3CZeroU3Ek__BackingField;
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43  : public RuntimeArray
{
	ALIGN_FIELD (8) Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 m_Items[1];

	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_TisIl2CppFullySharedGenericAny_m99DCBBBD1225A98CF2176A0E3EA92FFC779E7331_gshared (RuntimeObject* ___0_source, Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Max_TisIl2CppFullySharedGenericAny_mF70C40B9CE4A1FCD36FCB0B39B426A2481DD8989_gshared (RuntimeObject* ___0_source, Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SkipWhile_TisIl2CppFullySharedGenericAny_mEFA9FF8FC256AB4E709FBA4B9981014CB613F62E_gshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpHash_1__ctor_mB38D4F6C2D985DFAD61DF504AA7FB220CA374852_gshared (SrpHash_1_t222E115E9AAFFF86943780EE1F35E709C76B55A2* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpParameters__ctor_m07C8E73D312C86E892797CFA29CD0C38557F485D (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* ___0_hashAlgorithmFactory, String_t* ___1_largeSafePrime, String_t* ___2_generator, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_paddedLength, Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F ___4_revision, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpClient_set_Parameters_m8D51A3D20A9B9989559E996C20B5CE8B85BBC0A2_inline (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpParameters_get_HashSizeBytes_mCCE8535A46CB7E9F493D8701260FD95E2054D3A0 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_RandomInteger_mDEF05584F2E1385AA46CE823D610B3E52415CA4C (int32_t ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_hexLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8 (String_t* ___0_hex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_exponent, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_modulus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpClient_ComputeA_mF15A56B24F61DABB38FEA2751EA4A3A84632E060 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpEphemeral__ctor_m56E2FC40A68FA7AB558AFE7E5F292A2C73147AA8 (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpEphemeral_set_Secret_mEA09DA5260B90A4E70ECFF47C8C2C6BFFDC62987_inline (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpEphemeral_set_Public_m32FC991A7152A7286F689AA0952ADB9D84167985_inline (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* SrpParameters_get_Pad_m32170038E0BBB392FE9F31B6222AA93AF793D3BE_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
inline SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* Func_2_Invoke_m3B5FAB813078FD398927BE7991F39A7821271D28_inline (Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_arg, const RuntimeMethod* method)
{
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* il2cppRetVal;
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, (Il2CppFullySharedGenericAny)___0_arg, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Multiplier_mDC7905A290CC92069E5D9A8C7B17B51F34BA679C (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Multiply_m254D288AB33D47A63D5E3157462520537BFF0E41 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Subtraction_m37796236FFA00B8843BC5F33612EAC2972A6E585 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Addition_m42D8204CEAEEF818E82E36AC8EE340066047E0A0 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Modulus_mB93AC766836FC26A8BB6717FCB32A61A7C6B57B4 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_dividend, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_modulus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Implicit_mA1E0CFB95113264FF840AAC7A45827DDB132D33C (int32_t ___0_integer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpInteger_op_Equality_m3246591C03249E238CB822872A67ACA0ABE208BA (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecurityException__ctor_m0998D0D6AAB191E05A9FA69255F57B8AFCABD01A (SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpClient_ComputeU_m82813EC34D1AF439DC1FCD0DF6E95A4D7CA80BCB (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_A, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_B, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpClient_ComputeS_m0491EF2530DB432A984DE9A07ABB603DFA6A8539 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_a, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_B, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___2_u, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___3_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_ExclusiveOr_m00267EEF194B53CD9CD1225B2DC58AF9F0D45BAE (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpSession__ctor_m696E1FF5BD0C894B3775A48FB639D1C66CEF8A27 (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpSession_set_Key_mDE4DCECFFE204547FC50409B5B7E73A6C3093FCE_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpSession_set_Proof_m6160030C2907656B5C38695EF34220F01F9EA9A6_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SrpSession_get_Proof_mF18582433DD47C6C528265D0414D73BFBBEAF3F6_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SrpSession_get_Key_m34F7A0AAEAFE8B63B01700AB36567A1E6C72BCC2_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpInteger_op_Inequality_m245C6A7B0802A91EF96040688232932DF6DAC0D7 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* SrpHash_get_Hasher_mC3F26D15B92B2F4A9E42D050A3B1904E696FD049 (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* SrpHash_get_HasherFactory_mA19A5A43F939EAD42BF1E170594C1A517B04B18B_inline (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, const RuntimeMethod* method) ;
inline HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* Func_1_Invoke_mBC7BDFC37B1F84DB2E9A67F3366D31645E87F910_inline (Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* __this, const RuntimeMethod* method)
{
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Func_2__ctor_m1663334DABE6A3DA7295F53E0D1AF677435E33D5 (Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBB23C1C1804A5D1F55F962CB1C1CA67DF342BCB3 (RuntimeObject* ___0_source, Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051*, const RuntimeMethod*))Enumerable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5BBCA2BC02448D0B77D2201BB08B13BAB3BABA53_gshared)(___0_source, ___1_selector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpHash_Combine_m9FA1458A5A38BC4AEFBD4EB89D4B6CEE49375F20 (RuntimeObject* ___0_arrays, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHash_ComputeHash_m3107974FD777D538E7A74E139103F06869F0D0E8 (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_FromByteArray_m29EB7B4B3F92DB949B7097574EFE10F64EE2DA39 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CryptoConfig_CreateFromName_m94278BF6EF728C4A82875C4367A44A91CE8A042A (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* SHA384_Create_m9ACE4F589597C30B8BB648320B201C9DBCACDD4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* SHA512_Create_m8BC1AD8C4B34A48F0730842A93C4885C9A4970F5 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpHash_get_EmptyBuffer_mA2BEB5D480DBDE443366D81C59D49D43A579E5C7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpInteger_ToByteArray_m7A3E95A5FD96A3BA2A082FAFB834A26CD0178057 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_m31977A36A1BABEF780AECDA194D4EC8863DC57CB (Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline int32_t Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1 (RuntimeObject* ___0_source, Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* ___1_selector, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F*, const RuntimeMethod*))Enumerable_Sum_TisIl2CppFullySharedGenericAny_m99DCBBBD1225A98CF2176A0E3EA92FFC779E7331_gshared)(___0_source, ___1_selector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD1FA6E2B68348B033116BA5D92F1CD085B4122B (U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpHash_GetBytes_m697B29926D0E8A385014B022312CA9FA4E6D91CA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpInteger_NormalizeWhitespace_mF06A93374D4838901A26482CE73CD1E96B5F126D (String_t* ___0_hexNumber, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_trimChars, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Parse_m34C5C7F90E3958F25EF5BD97AAB7243D4411D51D (String_t* ___0_value, int32_t ___1_style, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D (String_t* ___0_input, String_t* ___1_pattern, String_t* ___2_replacement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) ;
inline void Func_2__ctor_m4EF56F94F4491B72B6E7E9FF84CE1E51383D5069 (Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline int32_t Enumerable_Max_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF8C5BEF1479CEA359F3F48C89EE03785DA25473F (RuntimeObject* ___0_source, Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* ___1_selector, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79*, const RuntimeMethod*))Enumerable_Max_TisIl2CppFullySharedGenericAny_mF70C40B9CE4A1FCD36FCB0B39B426A2481DD8989_gshared)(___0_source, ___1_selector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* RandomNumberGenerator_Create_m10E13D4B5CF93E2EBB1BE9226488C919FFAC3340 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, int64_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_UnaryNegation_m2C40453E25F1D2E3E5D892D92CE633C8E177C1C3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_ModPow_mBA680367B8FE86270018C3DE0EF25CF398013F76 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_exponent, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___2_modulus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) ;
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_mB99365A1DAD14B4BA536860304D3C7B028C6CF18 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, String_t* ___0_format, const RuntimeMethod* method) ;
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
inline RuntimeObject* Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisIl2CppFullySharedGenericAny_mCC98E894875B57F5F4299D77112F26131A10649F_gshared)(___0_source, method);
}
inline void Func_2__ctor_m9ED7D55E27AA24AF26F3C1F4D1C12EEE95C83D8B (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_SkipWhile_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54805BF43B3E720A881937F99A6561CAEF6E62A3 (RuntimeObject* ___0_source, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*, const RuntimeMethod*))Enumerable_SkipWhile_TisIl2CppFullySharedGenericAny_mEFA9FF8FC256AB4E709FBA4B9981014CB613F62E_gshared)(___0_source, ___1_predicate, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_gshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m6A665131BC9DC1F70D66117712027604B16EB6C6 (uint32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_mFA343EF42719C6D9CBCB4FAFCE92D1E120C1B200 (int64_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680 (uint64_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpInteger_Max_mFEFEDD62162E20332DFF9DC8A0576B6F1FFD80CB (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_dividend, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_divisor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_dividend, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_divisor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_ExclusiveOr_m2A4003341CC48066588F5D2171A0E21B508FF8FF (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_get_Zero_m60105DD364B61CDC5BDED5740E5045B980387EB1_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, int32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_trimChars, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpInteger__ctor_m92182386ABAEB5163081FCD12CBC07033F7CD529 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, String_t* ___0_hex, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_hexLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpInteger_Equals_mA715669F419DF59E15A0E6803F8553250C279FA5 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m744E9ED08E01D57AE82ABE1AEE084BBEE64DAF3B (U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* __this, const RuntimeMethod* method) ;
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Prime_m53399EFD954C2EFA3AC0C9FBED58F8A5B9E42BFC_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Generator_m8B06421EAFFFD827DF2610EA40A35472ED8A4CBF_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_PaddedLength_m9CDFE9A74710D1468EA9CC68B39136605157EF1D_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void SrpHash_1__ctor_mBAA7B29090E0A9064FA23146834FD6100840D9DD (SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31* __this, const RuntimeMethod* method)
{
	((  void (*) (SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31*, const RuntimeMethod*))SrpHash_1__ctor_mB38D4F6C2D985DFAD61DF504AA7FB220CA374852_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpHash__ctor_m755FBA883E987AB650C9D3935A5EAEB7F395234F (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* ___0_hasherFactory, String_t* ___1_algorithmName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Hasher_m2F164EE9C2DD199D6542FA23BCF533157C30DD2F_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
inline void Func_2__ctor_m77E71EBC41E99A5CA8251914EE878C5DF159D2D5 (Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)(__this, ___0_object, ___1_method, method);
}
inline bool Nullable_1_get_HasValue_m5DF27F4DE76EF53E4A57929094E9E70113DD3A12_inline (Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetValueOrDefault_mDD32BE2D76C38E6625EC91057D33A62CEA841325_inline (Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Revision_m49FDDAD88574ECABFDCD7D0C5B084D5E485A1A85_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SrpParameters_get_Hasher_m2DEFCEFBD2ED5017C408BF69CFECFDF4A689E2D5_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpHashFunction__ctor_m5CB8D80A4A924D42B22495C9DC837EA9BAA1EE48 (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SrpParameters_get_Revision_m7134DBE5DF0860ABE644BD9997704169F11E666A_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SrpParameters_get_PaddedLength_mF86A43AB244CE3DD239C8607F96E8EA2B2C51F39_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_Pad_mF2028383DA6F5971303020B524B1192F561CEC6A (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, int32_t ___0_newLength, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpServer_set_Parameters_mEBC60AE6209CC9F0354110530223643658A6FEA5_inline (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpServer_ComputeB_mBEB4235307052D4B1DA836F73B6FB862439E3FA6 (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, String_t* ___0_verifier, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpServer_ComputeS_m79DF270F6AAA74509AC69F9D40B3A5B6070BD543 (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_A, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_b, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___2_u, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___3_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpUtility_IsValidInteger_mA23BC4BD551E2E2BA58B49FB9BAA21E898BCD0D9 (String_t* ___0_hexString, int32_t ___1_requiredLength, const RuntimeMethod* method) ;
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
// Method Definition Index: 132172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpClient__ctor_m110EEA4FC3D8BE2CAA30115B1BE349ED586FD960 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F V_1;
	memset((&V_1), 0, sizeof(V_1));
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B2_0 = NULL;
	SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* G_B2_1 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B1_0 = NULL;
	SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = ___0_parameters;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0026;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F));
		Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F L_3 = V_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_4 = (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61*)il2cpp_codegen_object_new(SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61_il2cpp_TypeInfo_var);
		SrpParameters__ctor_m07C8E73D312C86E892797CFA29CD0C38557F485D(L_4, (Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28*)NULL, (String_t*)NULL, (String_t*)NULL, L_2, L_3, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		NullCheck(G_B2_1);
		SrpClient_set_Parameters_m8D51A3D20A9B9989559E996C20B5CE8B85BBC0A2_inline(G_B2_1, G_B2_0, NULL);
		return;
	}
}
// Method Definition Index: 132173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = __this->___U3CParametersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpClient_set_Parameters_m8D51A3D20A9B9989559E996C20B5CE8B85BBC0A2 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = ___0_value;
		__this->___U3CParametersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpClient_GenerateSalt_m0A80F5AF49CA817728D29BF4EDAE24FB37477030 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SrpParameters_get_HashSizeBytes_mCCE8535A46CB7E9F493D8701260FD95E2054D3A0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2;
		L_2 = SrpInteger_RandomInteger_mDEF05584F2E1385AA46CE823D610B3E52415CA4C(L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_2, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 132176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpClient_DerivePrivateKey_m06F3BD8CE6306E94090D4022B27C44530D1317DE (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, String_t* ___0_salt, String_t* ___1_userName, String_t* ___2_password, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_1;
		L_1 = SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___0_salt;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_2, NULL);
		V_1 = L_3;
		String_t* L_4 = ___1_userName;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, L_5, NULL);
		V_2 = L_6;
		String_t* L_7 = ___2_password;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, L_8, NULL);
		V_3 = L_9;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_10 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13 = V_1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		String_t* L_18 = V_2;
		String_t* L_19 = V_3;
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_18, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_19, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		NullCheck(L_15);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_21;
		L_21 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_15, L_17, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_21);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_21);
		NullCheck(L_10);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_22;
		L_22 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_10, L_14, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = V_4;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 132177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpClient_DeriveVerifier_m1CE3F160BEEE54D61402790760993F11188F5433 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, String_t* ___0_privateKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(L_0, NULL);
		V_0 = L_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_2;
		L_2 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_2);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(L_2, NULL);
		String_t* L_4 = ___0_privateKey;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5;
		L_5 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_4, NULL);
		V_1 = L_5;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_6 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = V_0;
		NullCheck(L_3);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8;
		L_8 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_3, L_6, L_7, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9 = V_2;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 132178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* SrpClient_GenerateEphemeral_mF247EC5C5A1D5942B8EF0963E872929D9E70E22D (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SrpParameters_get_HashSizeBytes_mCCE8535A46CB7E9F493D8701260FD95E2054D3A0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2;
		L_2 = SrpInteger_RandomInteger_mDEF05584F2E1385AA46CE823D610B3E52415CA4C(L_1, NULL);
		V_0 = L_2;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4;
		L_4 = SrpClient_ComputeA_mF15A56B24F61DABB38FEA2751EA4A3A84632E060(__this, L_3, NULL);
		V_1 = L_4;
		SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* L_5 = (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E*)il2cpp_codegen_object_new(SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E_il2cpp_TypeInfo_var);
		SrpEphemeral__ctor_m56E2FC40A68FA7AB558AFE7E5F292A2C73147AA8(L_5, NULL);
		SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* L_6 = L_5;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_7, L_8, NULL);
		NullCheck(L_6);
		SrpEphemeral_set_Secret_mEA09DA5260B90A4E70ECFF47C8C2C6BFFDC62987_inline(L_6, L_9, NULL);
		SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* L_10 = L_6;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12 = V_2;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_11, L_12, NULL);
		NullCheck(L_10);
		SrpEphemeral_set_Public_m32FC991A7152A7286F689AA0952ADB9D84167985_inline(L_10, L_13, NULL);
		return L_10;
	}
}
// Method Definition Index: 132179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpClient_ComputeA_mF15A56B24F61DABB38FEA2751EA4A3A84632E060 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_a, const RuntimeMethod* method) 
{
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(L_0, NULL);
		V_0 = L_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_2;
		L_2 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_2);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___0_a;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5 = V_0;
		NullCheck(L_3);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_6;
		L_6 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 132180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpClient_ComputeU_m82813EC34D1AF439DC1FCD0DF6E95A4D7CA80BCB (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_A, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_B, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* V_0 = NULL;
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_1;
		L_1 = SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10(L_0, NULL);
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_2;
		L_2 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_2);
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_3;
		L_3 = SrpParameters_get_Pad_m32170038E0BBB392FE9F31B6222AA93AF793D3BE_inline(L_2, NULL);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_6 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = ___0_A;
		NullCheck(L_6);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8;
		L_8 = Func_2_Invoke_m3B5FAB813078FD398927BE7991F39A7821271D28_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_10 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11 = ___1_B;
		NullCheck(L_10);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12;
		L_12 = Func_2_Invoke_m3B5FAB813078FD398927BE7991F39A7821271D28_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		NullCheck(L_1);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13;
		L_13 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_1, L_9, NULL);
		return L_13;
	}
}
// Method Definition Index: 132181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpClient_ComputeS_m0491EF2530DB432A984DE9A07ABB603DFA6A8539 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_a, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_B, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___2_u, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___3_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_2 = NULL;
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(L_0, NULL);
		V_0 = L_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_2;
		L_2 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_2);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(L_2, NULL);
		V_1 = L_3;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_4;
		L_4 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_4);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5;
		L_5 = SrpParameters_get_Multiplier_mDC7905A290CC92069E5D9A8C7B17B51F34BA679C(L_4, NULL);
		V_2 = L_5;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_6 = ___1_B;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = V_2;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_9 = ___3_x;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10 = V_0;
		NullCheck(L_8);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11;
		L_11 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_8, L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12;
		L_12 = SrpInteger_op_Multiply_m254D288AB33D47A63D5E3157462520537BFF0E41(L_7, L_11, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13;
		L_13 = SrpInteger_op_Subtraction_m37796236FFA00B8843BC5F33612EAC2972A6E585(L_6, L_12, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_14 = ___0_a;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_15 = ___2_u;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_16 = ___3_x;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17;
		L_17 = SrpInteger_op_Multiply_m254D288AB33D47A63D5E3157462520537BFF0E41(L_15, L_16, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_18;
		L_18 = SrpInteger_op_Addition_m42D8204CEAEEF818E82E36AC8EE340066047E0A0(L_14, L_17, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_19 = V_0;
		NullCheck(L_13);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_20;
		L_20 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_13, L_18, L_19, NULL);
		return L_20;
	}
}
// Method Definition Index: 132182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* SrpClient_DeriveSession_mEF09DA398F6851803E1E9BFBBD7EDF5330FDF379 (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, String_t* ___0_clientSecretEphemeral, String_t* ___1_serverPublicEphemeral, String_t* ___2_salt, String_t* ___3_username, String_t* ___4_privateKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* V_2 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_3 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_4 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_5 = NULL;
	String_t* V_6 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_7 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_8 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_9 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_10 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_11 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_12 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(L_0, NULL);
		V_0 = L_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_2;
		L_2 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_2);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(L_2, NULL);
		V_1 = L_3;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_4;
		L_4 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_4);
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_5;
		L_5 = SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10(L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = ___0_clientSecretEphemeral;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7;
		L_7 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_6, NULL);
		V_3 = L_7;
		String_t* L_8 = ___1_serverPublicEphemeral;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_9;
		L_9 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_8, NULL);
		V_4 = L_9;
		String_t* L_10 = ___2_salt;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11;
		L_11 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_10, NULL);
		V_5 = L_11;
		String_t* L_12 = ___3_username;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, L_13, NULL);
		V_6 = L_14;
		String_t* L_15 = ___4_privateKey;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_16;
		L_16 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_15, NULL);
		V_7 = L_16;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_18 = V_3;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_19 = V_0;
		NullCheck(L_17);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_20;
		L_20 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_17, L_18, L_19, NULL);
		V_8 = L_20;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_21 = V_4;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_22 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_23;
		L_23 = SrpInteger_op_Modulus_mB93AC766836FC26A8BB6717FCB32A61A7C6B57B4(L_21, L_22, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_24;
		L_24 = SrpInteger_op_Implicit_mA1E0CFB95113264FF840AAC7A45827DDB132D33C(0, NULL);
		bool L_25;
		L_25 = SrpInteger_op_Equality_m3246591C03249E238CB822872A67ACA0ABE208BA(L_23, L_24, NULL);
		if (!L_25)
		{
			goto IL_007c;
		}
	}
	{
		SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C* L_26 = (SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)));
		SecurityException__ctor_m0998D0D6AAB191E05A9FA69255F57B8AFCABD01A(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEE1886E28BAF182807F0FFF257BA126273EF85A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SrpClient_DeriveSession_mEF09DA398F6851803E1E9BFBBD7EDF5330FDF379_RuntimeMethod_var)));
	}

IL_007c:
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_27 = V_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_28 = V_4;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_29;
		L_29 = SrpClient_ComputeU_m82813EC34D1AF439DC1FCD0DF6E95A4D7CA80BCB(__this, L_27, L_28, NULL);
		V_9 = L_29;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_30 = V_3;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_31 = V_4;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_32 = V_9;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_33 = V_7;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_34;
		L_34 = SrpClient_ComputeS_m0491EF2530DB432A984DE9A07ABB603DFA6A8539(__this, L_30, L_31, L_32, L_33, NULL);
		V_10 = L_34;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_35 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_38 = V_10;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		NullCheck(L_35);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_39;
		L_39 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_35, L_37, NULL);
		V_11 = L_39;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_40 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_41;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_43 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_44;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_46 = V_0;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_46);
		NullCheck(L_43);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_47;
		L_47 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_43, L_45, NULL);
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_48 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_49;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_51 = V_1;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		NullCheck(L_48);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_52;
		L_52 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_48, L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_53;
		L_53 = SrpInteger_op_ExclusiveOr_m00267EEF194B53CD9CD1225B2DC58AF9F0D45BAE(L_47, L_52, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_53);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_53);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_42;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_55 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56;
		String_t* L_58 = V_6;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_58);
		NullCheck(L_55);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_59;
		L_59 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_55, L_57, NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_59);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_54;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_61 = V_5;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_61);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_60;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_63 = V_8;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_63);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64 = L_62;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_65 = V_4;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_65);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_64;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_67 = V_11;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_67);
		NullCheck(L_40);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_68;
		L_68 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_40, L_66, NULL);
		V_12 = L_68;
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_69 = (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F*)il2cpp_codegen_object_new(SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F_il2cpp_TypeInfo_var);
		SrpSession__ctor_m696E1FF5BD0C894B3775A48FB639D1C66CEF8A27(L_69, NULL);
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_70 = L_69;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_71 = V_11;
		il2cpp_codegen_initobj((&V_13), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_72 = V_13;
		NullCheck(L_71);
		String_t* L_73;
		L_73 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_71, L_72, NULL);
		NullCheck(L_70);
		SrpSession_set_Key_mDE4DCECFFE204547FC50409B5B7E73A6C3093FCE_inline(L_70, L_73, NULL);
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_74 = L_70;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_75 = V_12;
		il2cpp_codegen_initobj((&V_13), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_76 = V_13;
		NullCheck(L_75);
		String_t* L_77;
		L_77 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_75, L_76, NULL);
		NullCheck(L_74);
		SrpSession_set_Proof_m6160030C2907656B5C38695EF34220F01F9EA9A6_inline(L_74, L_77, NULL);
		return L_74;
	}
}
// Method Definition Index: 132183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpClient_VerifySession_m28E9F23202E0D22BBA6ED2E6D8982F83615C1D9C (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, String_t* ___0_clientPublicEphemeral, SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* ___1_clientSession, String_t* ___2_serverSessionProof, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_2 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_3 = NULL;
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline(__this, NULL);
		NullCheck(L_0);
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_1;
		L_1 = SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10(L_0, NULL);
		String_t* L_2 = ___0_clientPublicEphemeral;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_2, NULL);
		V_0 = L_3;
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_4 = ___1_clientSession;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = SrpSession_get_Proof_mF18582433DD47C6C528265D0414D73BFBBEAF3F6_inline(L_4, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_6;
		L_6 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_5, NULL);
		V_1 = L_6;
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_7 = ___1_clientSession;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = SrpSession_get_Key_m34F7A0AAEAFE8B63B01700AB36567A1E6C72BCC2_inline(L_7, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_9;
		L_9 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_8, NULL);
		V_2 = L_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_14 = V_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		NullCheck(L_1);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17;
		L_17 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_1, L_15, NULL);
		V_3 = L_17;
		String_t* L_18 = ___2_serverSessionProof;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_19;
		L_19 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_18, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_20 = V_3;
		bool L_21;
		L_21 = SrpInteger_op_Inequality_m245C6A7B0802A91EF96040688232932DF6DAC0D7(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_005b;
		}
	}
	{
		SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C* L_22 = (SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)));
		SecurityException__ctor_m0998D0D6AAB191E05A9FA69255F57B8AFCABD01A(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral65C826DB21F31B73C0D297B55A67571647E7FB9C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SrpClient_VerifySession_m28E9F23202E0D22BBA6ED2E6D8982F83615C1D9C_RuntimeMethod_var)));
	}

IL_005b:
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
// Method Definition Index: 132184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpConstants__ctor_mDA59155A5F2506308E5589076326D1F61D441D27 (SrpConstants_t3A6A0A0FA0867C0607F18FA860821449D96CF5AF* __this, const RuntimeMethod* method) 
{
	{
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
// Method Definition Index: 132185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpEphemeral_get_Public_m0ED50DBFB25953167F50B0A23BEAACEEFC13AA6F (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132186
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpEphemeral_set_Public_m32FC991A7152A7286F689AA0952ADB9D84167985 (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPublicU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpEphemeral_get_Secret_mDAC15B1210F39B35A97C17D8977531EBF5646190 (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSecretU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpEphemeral_set_Secret_mEA09DA5260B90A4E70ECFF47C8C2C6BFFDC62987 (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSecretU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSecretU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpEphemeral__ctor_m56E2FC40A68FA7AB558AFE7E5F292A2C73147AA8 (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, const RuntimeMethod* method) 
{
	{
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
// Method Definition Index: 132190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpHash__ctor_m755FBA883E987AB650C9D3935A5EAEB7F395234F (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* ___0_hasherFactory, String_t* ___1_algorithmName, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* L_0 = ___0_hasherFactory;
		__this->___U3CHasherFactoryU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHasherFactoryU3Ek__BackingField), (void*)L_0);
		String_t* L_1 = ___1_algorithmName;
		String_t* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0023;
		}
		G_B1_0 = L_2;
		G_B1_1 = __this;
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_3;
		L_3 = SrpHash_get_Hasher_mC3F26D15B92B2F4A9E42D050A3B1904E696FD049(__this, NULL);
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_4);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0023:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CAlgorithmNameU3Ek__BackingField = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CAlgorithmNameU3Ek__BackingField), (void*)G_B2_0);
		return;
	}
}
// Method Definition Index: 132191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* SrpHash_get_HasherFactory_mA19A5A43F939EAD42BF1E170594C1A517B04B18B (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* L_0 = __this->___U3CHasherFactoryU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* SrpHash_get_Hasher_mC3F26D15B92B2F4A9E42D050A3B1904E696FD049 (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* L_0;
		L_0 = SrpHash_get_HasherFactory_mA19A5A43F939EAD42BF1E170594C1A517B04B18B_inline(__this, NULL);
		NullCheck(L_0);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_1;
		L_1 = Func_1_Invoke_mBC7BDFC37B1F84DB2E9A67F3366D31645E87F910_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 132193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHash_ComputeHash_mA092D29DCE7850C222AFCB0297B952D6F568CF68 (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBB23C1C1804A5D1F55F962CB1C1CA67DF342BCB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CComputeHashU3Eb__6_0_m40D7BD2AEF154BB99392CFC55920CB203C993533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* G_B2_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* G_B2_2 = NULL;
	Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* G_B1_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* G_B1_2 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_values;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* L_1 = ((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9__6_0;
		Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0021;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* L_3 = ((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* L_4 = (Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051*)il2cpp_codegen_object_new(Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051_il2cpp_TypeInfo_var);
		Func_2__ctor_m1663334DABE6A3DA7295F53E0D1AF677435E33D5(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CComputeHashU3Eb__6_0_m40D7BD2AEF154BB99392CFC55920CB203C993533_RuntimeMethod_var), NULL);
		Func_2_tAF06B745A36D23F105F8D17F16BC771E5D76E051* L_5 = L_4;
		((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9__6_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9__6_0), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0021:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisRuntimeObject_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBB23C1C1804A5D1F55F962CB1C1CA67DF342BCB3((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisRuntimeObject_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mBB23C1C1804A5D1F55F962CB1C1CA67DF342BCB3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = SrpHash_Combine_m9FA1458A5A38BC4AEFBD4EB89D4B6CEE49375F20(L_6, NULL);
		NullCheck(G_B2_2);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8;
		L_8 = SrpHash_ComputeHash_m3107974FD777D538E7A74E139103F06869F0D0E8(G_B2_2, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 132194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpHash_get_HashSizeBytes_m6C4CA7919953994FEFB9C796A41E8A432776B01E (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_0;
		L_0 = SrpHash_get_Hasher_mC3F26D15B92B2F4A9E42D050A3B1904E696FD049(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10, L_0);
		return ((int32_t)(L_1/8));
	}
}
// Method Definition Index: 132195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpHash_get_AlgorithmName_m8742AC20359A7CA466CDA483514612ED3E585061 (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAlgorithmNameU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHash_ComputeHash_m3107974FD777D538E7A74E139103F06869F0D0E8 (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_0;
		L_0 = SrpHash_get_Hasher_mC3F26D15B92B2F4A9E42D050A3B1904E696FD049(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpInteger_FromByteArray_m29EB7B4B3F92DB949B7097574EFE10F64EE2DA39(L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 132197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* SrpHash_CreateHasher_m96AB5808A5C7F0E09A115ED15293FDAF22C10F75 (String_t* ___0_algorithm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57C2411D7466EB3172B6ADBF471154844F8FEA55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89487254CCF55296ACC80B8660A14ADE141E6868);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B3CFB4B560123030AE265CBD62C0BE39E1D8EC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC55AFFA4599D7E7F1FE45BF21D72FD8E0E12E4B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD431DA333CF96CF017F2C2FE0CE09A07D97C41C8);
		s_Il2CppMethodInitialized = true;
	}
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		V_0 = (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)NULL;
		String_t* L_0 = ___0_algorithm;
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = CryptoConfig_CreateFromName_m94278BF6EF728C4A82875C4367A44A91CE8A042A(L_0, NULL);
		V_0 = ((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)CastclassClass((RuntimeObject*)L_1, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D_il2cpp_TypeInfo_var));
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_2 = V_0;
		if (L_2)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_3 = ___0_algorithm;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_3, NULL);
		V_1 = L_4;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral8B3CFB4B560123030AE265CBD62C0BE39E1D8EC6, NULL);
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral57C2411D7466EB3172B6ADBF471154844F8FEA55, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral89487254CCF55296ACC80B8660A14ADE141E6868, NULL);
		if (L_10)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralC55AFFA4599D7E7F1FE45BF21D72FD8E0E12E4B1, NULL);
		if (L_12)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralD431DA333CF96CF017F2C2FE0CE09A07D97C41C8, NULL);
		if (L_14)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_0079;
	}

IL_005b:
	{
		MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_15;
		L_15 = MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223(NULL);
		return L_15;
	}

IL_0061:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_16;
		L_16 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		return L_16;
	}

IL_0067:
	{
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_17;
		L_17 = SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC(NULL);
		return L_17;
	}

IL_006d:
	{
		SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* L_18;
		L_18 = SHA384_Create_m9ACE4F589597C30B8BB648320B201C9DBCACDD4D(NULL);
		return L_18;
	}

IL_0073:
	{
		SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* L_19;
		L_19 = SHA512_Create_m8BC1AD8C4B34A48F0730842A93C4885C9A4970F5(NULL);
		return L_19;
	}

IL_0079:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_20 = V_0;
		return L_20;
	}
}
// Method Definition Index: 132198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpHash_get_EmptyBuffer_mA2BEB5D480DBDE443366D81C59D49D43A579E5C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_StaticFields*)il2cpp_codegen_static_fields_for(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var))->___U3CEmptyBufferU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132199
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpHash_GetBytes_m697B29926D0E8A385014B022312CA9FA4E6D91CA (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = SrpHash_get_EmptyBuffer_mA2BEB5D480DBDE443366D81C59D49D43A579E5C7_inline(NULL);
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, il2cpp_defaults.string_class));
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(20, L_5, L_6);
		return L_7;
	}

IL_0024:
	{
		RuntimeObject* L_8 = ___0_obj;
		V_1 = ((SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)IsInstClass((RuntimeObject*)L_8, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var));
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = SrpInteger_op_Inequality_m245C6A7B0802A91EF96040688232932DF6DAC0D7(L_9, (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)NULL, NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11 = V_1;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = SrpInteger_ToByteArray_m7A3E95A5FD96A3BA2A082FAFB834A26CD0178057(L_11, NULL);
		return L_12;
	}

IL_003b:
	{
		il2cpp_codegen_runtime_class_init_inline(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = SrpHash_get_EmptyBuffer_mA2BEB5D480DBDE443366D81C59D49D43A579E5C7_inline(NULL);
		return L_13;
	}
}
// Method Definition Index: 132200
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpHash_Combine_m9FA1458A5A38BC4AEFBD4EB89D4B6CEE49375F20 (RuntimeObject* ___0_arrays, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCombineU3Eb__18_0_m221CC4A195666F417C8814715A8977C9F7B140A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_arrays;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_1 = ((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9__18_0;
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* L_3 = ((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_4 = (Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F*)il2cpp_codegen_object_new(Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F_il2cpp_TypeInfo_var);
		Func_2__ctor_m31977A36A1BABEF780AECDA194D4EC8863DC57CB(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CCombineU3Eb__18_0_m221CC4A195666F417C8814715A8977C9F7B140A4_RuntimeMethod_var), NULL);
		Func_2_tB6DBD073DD6EFE9453D7F4D94FFE97E888E0B32F* L_5 = L_4;
		((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9__18_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9__18_0), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		int32_t L_6;
		L_6 = Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1(G_B2_1, G_B2_0, Enumerable_Sum_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA70ABAC4E4E3DC0E8B50105B211D2B29E51F07E1_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		V_1 = 0;
		RuntimeObject* L_8 = ___0_arrays;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t21E2C2093877744709873DDCB2D3C8297821E513_il2cpp_TypeInfo_var, L_8);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{
				{
					RuntimeObject* L_10 = V_2;
					if (!L_10)
					{
						goto IL_0062;
					}
				}
				{
					RuntimeObject* L_11 = V_2;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0062:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_004f_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_12 = V_2;
				NullCheck(L_12);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0, IEnumerator_1_t1E268397CD739ED7EB63601E159FAA7D40A6F44A_il2cpp_TypeInfo_var, L_12);
				V_3 = L_13;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
				int32_t L_16 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_3;
				NullCheck(L_17);
				Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, L_16, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
				int32_t L_18 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
				NullCheck(L_19);
				V_1 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)(((RuntimeArray*)L_19)->max_length))));
			}

IL_004f_1:
			{
				RuntimeObject* L_20 = V_2;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_0063;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 132201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpHash__cctor_m1AD6B5E008520D12251D0035EC19EC55F270DC99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_StaticFields*)il2cpp_codegen_static_fields_for(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var))->___U3CEmptyBufferU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_StaticFields*)il2cpp_codegen_static_fields_for(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var))->___U3CEmptyBufferU3Ek__BackingField), (void*)L_0);
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
// Method Definition Index: 132202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA24627F359AD76665405156EA542A45CED7C1A79 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* L_0 = (U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D*)il2cpp_codegen_object_new(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFD1FA6E2B68348B033116BA5D92F1CD085B4122B(L_0, NULL);
		((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD1FA6E2B68348B033116BA5D92F1CD085B4122B (U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 132204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CU3Ec_U3CComputeHashU3Eb__6_0_m40D7BD2AEF154BB99392CFC55920CB203C993533 (U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* __this, RuntimeObject* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_v;
		il2cpp_codegen_runtime_class_init_inline(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = SrpHash_GetBytes_m697B29926D0E8A385014B022312CA9FA4E6D91CA(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 132205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCombineU3Eb__18_0_m221CC4A195666F417C8814715A8977C9F7B140A4 (U3CU3Ec_t775E72FF5CCE973DA782C7C22DC896034E7A813D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_a, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_a;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
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
// Method Definition Index: 132208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpInteger__ctor_m92182386ABAEB5163081FCD12CBC07033F7CD529 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, String_t* ___0_hex, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_hexLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_hex;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SrpInteger_NormalizeWhitespace_mF06A93374D4838901A26482CE73CD1E96B5F126D(L_0, NULL);
		___0_hex = L_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___1_hexLength;
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(__this, L_2, NULL);
		String_t* L_3 = ___0_hex;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = (-1);
	}

IL_0026:
	{
		V_0 = G_B3_0;
		String_t* L_5 = ___0_hex;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC(L_5, L_7, NULL);
		___0_hex = L_8;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_9, NULL);
		String_t* L_11 = ___0_hex;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_11, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_Parse_m34C5C7F90E3958F25EF5BD97AAB7243D4411D51D(L_12, ((int32_t)515), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_10, L_13, NULL);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(__this, L_14, NULL);
		return;
	}
}
// Method Definition Index: 132209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_0), 1, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(__this, L_1, NULL);
		return;
	}
}
// Method Definition Index: 132210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpInteger_NormalizeWhitespace_mF06A93374D4838901A26482CE73CD1E96B5F126D (String_t* ___0_hexNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56492DE44E356F6B1FF79944250E03169B492759);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_hexNumber;
		String_t* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		G_B2_0 = L_2;
	}

IL_000a:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(G_B2_0, _stringLiteral56492DE44E356F6B1FF79944250E03169B492759, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 132211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_get_Zero_m60105DD364B61CDC5BDED5740E5045B980387EB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ((SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_StaticFields*)il2cpp_codegen_static_fields_for(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var))->___U3CZeroU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CValueU3Ek__BackingField))->____bits), (void*)NULL);
		return;
	}
}
// Method Definition Index: 132214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CHexLengthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___U3CHexLengthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 132216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_Pad_mF2028383DA6F5971303020B524B1192F561CEC6A (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, int32_t ___0_newLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = L_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		NullCheck(L_1);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_1, L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3 = L_1;
		int32_t L_4 = ___0_newLength;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_5), L_4, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_3);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_3, L_5, NULL);
		return L_3;
	}
}
// Method Definition Index: 132217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpInteger_Max_mFEFEDD62162E20332DFF9DC8A0576B6F1FFD80CB (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Max_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF8C5BEF1479CEA359F3F48C89EE03785DA25473F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CMaxU3Eb__15_0_m1995FB6A75EFDFF3CB55310F9ED81CB46282FE25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* G_B2_0 = NULL;
	Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* G_B2_1 = NULL;
	Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* G_B1_0 = NULL;
	Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* G_B1_1 = NULL;
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_values;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* L_1 = ((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9__15_0;
		Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* L_3 = ((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* L_4 = (Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79*)il2cpp_codegen_object_new(Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79_il2cpp_TypeInfo_var);
		Func_2__ctor_m4EF56F94F4491B72B6E7E9FF84CE1E51383D5069(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CMaxU3Eb__15_0_m1995FB6A75EFDFF3CB55310F9ED81CB46282FE25_RuntimeMethod_var), NULL);
		Func_2_tD98A0AAA0293DF6664FD17D39FC3E8A12FB16A79* L_5 = L_4;
		((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9__15_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9__15_0), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		int32_t L_6;
		L_6 = Enumerable_Max_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF8C5BEF1479CEA359F3F48C89EE03785DA25473F((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Max_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mF8C5BEF1479CEA359F3F48C89EE03785DA25473F_RuntimeMethod_var);
		return L_6;
	}
}
// Method Definition Index: 132218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_RandomInteger_mDEF05584F2E1385AA46CE823D610B3E52415CA4C (int32_t ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	{
		int32_t L_0 = ___0_bytes;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9C051F84CAF3A82F6A64F22417D7A8BE21E7139)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SrpInteger_RandomInteger_mDEF05584F2E1385AA46CE823D610B3E52415CA4C_RuntimeMethod_var)));
	}

IL_0014:
	{
		RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* L_2;
		L_2 = RandomNumberGenerator_Create_m10E13D4B5CF93E2EBB1BE9226488C919FFAC3340(NULL);
		int32_t L_3 = ___0_bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6, L_2, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7;
		L_7 = SrpInteger_FromByteArray_m29EB7B4B3F92DB949B7097574EFE10F64EE2DA39(L_6, NULL);
		V_1 = L_7;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8 = V_1;
		NullCheck(L_8);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_9, ((int64_t)0), NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12 = V_1;
		NullCheck(L_12);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_op_UnaryNegation_m2C40453E25F1D2E3E5D892D92CE633C8E177C1C3(L_13, NULL);
		NullCheck(L_11);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_11, L_14, NULL);
	}

IL_004d:
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_15 = V_1;
		return L_15;
	}
}
// Method Definition Index: 132219
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_exponent, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_modulus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = ___0_exponent;
		NullCheck(L_1);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_1, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3 = ___1_modulus;
		NullCheck(L_3);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_ModPow_mBA680367B8FE86270018C3DE0EF25CF398013F76(L_0, L_2, L_4, NULL);
		V_0 = L_5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = V_0;
		bool L_7;
		L_7 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_6, ((int64_t)0), NULL);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8 = ___1_modulus;
		NullCheck(L_8);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_8, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_002f:
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_12, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13 = L_12;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14 = V_0;
		NullCheck(L_13);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_13, L_14, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_15 = L_13;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_16 = ___1_modulus;
		NullCheck(L_16);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_17;
		L_17 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_16, NULL);
		NullCheck(L_15);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_15, L_17, NULL);
		return L_15;
	}
}
// Method Definition Index: 132220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_hexLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0;
		L_0 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(__this, NULL);
		V_2 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___0_hexLength;
		G_B3_0 = L_2;
		goto IL_0014;
	}

IL_0013:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = V_2;
		G_B3_0 = L_3;
	}

IL_0014:
	{
		___0_hexLength = G_B3_0;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___0_hexLength), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41AF6DB1A82C1DA0958117DE79B3F001D8D52F02)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198_RuntimeMethod_var)));
	}

IL_002a:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		V_0 = L_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		V_1 = L_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_8, ((int64_t)0), NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		V_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_op_UnaryNegation_m2C40453E25F1D2E3E5D892D92CE633C8E177C1C3(L_10, NULL);
		V_1 = L_11;
	}

IL_0058:
	{
		String_t* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = BigInteger_ToString_mB99365A1DAD14B4BA536860304D3C7B028C6CF18((&V_1), _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)48));
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC(L_13, L_15, NULL);
		int32_t L_17;
		L_17 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___0_hexLength), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_18;
		L_18 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_16, L_17, ((int32_t)48), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, L_18, NULL);
		return L_19;
	}
}
// Method Definition Index: 132221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpInteger_ToByteArray_m7A3E95A5FD96A3BA2A082FAFB834A26CD0178057 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SkipWhile_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54805BF43B3E720A881937F99A6561CAEF6E62A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToByteArrayU3Eb__19_0_m7AD9AB5A706A038F6D257B62C907E194E4E334CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		V_3 = L_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BigInteger_ToByteArray_mC501D315AF605FB0EF172628E9D4C95D2F015EB3((&V_3), NULL);
		RuntimeObject* L_2;
		L_2 = Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826((RuntimeObject*)L_1, Enumerable_Reverse_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE1C5F82060828B85D20B64B14FDF6084A256C826_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_3 = ((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9__19_0;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_0032;
		}
		G_B1_0 = L_4;
		G_B1_1 = L_2;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* L_5 = ((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9;
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_6 = (Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1*)il2cpp_codegen_object_new(Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1_il2cpp_TypeInfo_var);
		Func_2__ctor_m9ED7D55E27AA24AF26F3C1F4D1C12EEE95C83D8B(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CToByteArrayU3Eb__19_0_m7AD9AB5A706A038F6D257B62C907E194E4E334CE_RuntimeMethod_var), NULL);
		Func_2_t58F5E6206B6CF00A0F00A4CD79CC81D86162B6E1* L_7 = L_6;
		((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9__19_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9__19_0), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0032:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_SkipWhile_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54805BF43B3E720A881937F99A6561CAEF6E62A3(G_B2_1, G_B2_0, Enumerable_SkipWhile_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m54805BF43B3E720A881937F99A6561CAEF6E62A3_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64(L_8, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		V_0 = L_9;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10;
		L_10 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(__this, NULL);
		V_4 = L_10;
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_4), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12;
		L_12 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(__this, NULL);
		V_4 = L_12;
		int32_t L_13;
		L_13 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) > ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_14)->max_length)), 2)))))
		{
			goto IL_0066;
		}
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		return L_15;
	}

IL_0066:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16;
		L_16 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(__this, NULL);
		V_4 = L_16;
		int32_t L_17;
		L_17 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_4), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		V_1 = ((int32_t)(L_17/2));
		int32_t L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_2 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		NullCheck(L_24);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_subtract(L_22, ((int32_t)(((RuntimeArray*)L_23)->max_length)))), ((int32_t)(((RuntimeArray*)L_24)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
		return L_25;
	}
}
// Method Definition Index: 132222
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpInteger_op_Implicit_mE161136BC08584A7C71446D88DD8B68F53D0051D (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_srpint, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_srpint;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 132223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Implicit_mA1E0CFB95113264FF840AAC7A45827DDB132D33C (int32_t ___0_integer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&___0_integer), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 132224
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Implicit_m75793F964F65E9A199BAA30B41202BB73ACA7082 (uint32_t ___0_integer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = UInt32_ToString_m6A665131BC9DC1F70D66117712027604B16EB6C6((&___0_integer), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 132225
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Implicit_mEB0934B4DAAE6ECE32B9416160E1D947EC362B72 (int64_t ___0_integer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Int64_ToString_mFA343EF42719C6D9CBCB4FAFCE92D1E120C1B200((&___0_integer), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 132226
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Implicit_m7FCE4374C982A9ADB6939339AD6A671FE1EFE16F (uint64_t ___0_integer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680((&___0_integer), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 132227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpInteger_op_Equality_m3246591C03249E238CB822872A67ACA0ABE208BA (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_left;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = ___1_right;
		bool L_2;
		L_2 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 132228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpInteger_op_Inequality_m245C6A7B0802A91EF96040688232932DF6DAC0D7 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_left;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = ___1_right;
		bool L_2;
		L_2 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 132229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Subtraction_m37796236FFA00B8843BC5F33612EAC2972A6E585 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		V_0 = L_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2 = ___0_left;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___1_right;
		NullCheck(L_4);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Subtraction_m91D2E4A4810792046B697F0500B8797F7645FF14(L_3, L_5, NULL);
		NullCheck(L_1);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_1, L_6, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = V_0;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_8 = (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)SZArrayNew(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var, (uint32_t)2);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_9 = L_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10 = ___0_left;
		NullCheck(L_10);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
		L_11 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_10, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_11);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_12 = L_9;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13 = ___1_right;
		NullCheck(L_13);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_14;
		L_14 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_14);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = SrpInteger_Max_mFEFEDD62162E20332DFF9DC8A0576B6F1FFD80CB(L_12, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_16), L_15, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_7);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_7, L_16, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 132230
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Addition_m42D8204CEAEEF818E82E36AC8EE340066047E0A0 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		V_0 = L_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2 = ___0_left;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___1_right;
		NullCheck(L_4);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_3, L_5, NULL);
		NullCheck(L_1);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_1, L_6, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = V_0;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_8 = (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)SZArrayNew(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var, (uint32_t)2);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_9 = L_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10 = ___0_left;
		NullCheck(L_10);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
		L_11 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_10, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_11);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_12 = L_9;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13 = ___1_right;
		NullCheck(L_13);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_14;
		L_14 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_14);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = SrpInteger_Max_mFEFEDD62162E20332DFF9DC8A0576B6F1FFD80CB(L_12, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_16), L_15, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_7);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_7, L_16, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 132231
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Division_m48266EF4E5045EBACE547C8EE6DE08D9374A140A (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_dividend, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_divisor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		V_0 = L_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2 = ___0_dividend;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___1_divisor;
		NullCheck(L_4);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_3, L_5, NULL);
		NullCheck(L_1);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_1, L_6, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = V_0;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_8 = (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)SZArrayNew(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var, (uint32_t)2);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_9 = L_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10 = ___0_dividend;
		NullCheck(L_10);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
		L_11 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_10, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_11);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_12 = L_9;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13 = ___1_divisor;
		NullCheck(L_13);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_14;
		L_14 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_14);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = SrpInteger_Max_mFEFEDD62162E20332DFF9DC8A0576B6F1FFD80CB(L_12, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_16), L_15, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_7);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_7, L_16, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 132232
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Modulus_mB93AC766836FC26A8BB6717FCB32A61A7C6B57B4 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_dividend, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_modulus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = L_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2 = ___0_dividend;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___1_modulus;
		NullCheck(L_4);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE(L_3, L_5, NULL);
		NullCheck(L_1);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_1, L_6, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = L_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8 = ___1_modulus;
		NullCheck(L_8);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9;
		L_9 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_8, NULL);
		NullCheck(L_7);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_7, L_9, NULL);
		return L_7;
	}
}
// Method Definition Index: 132233
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_Multiply_m254D288AB33D47A63D5E3157462520537BFF0E41 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = L_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2 = ___0_left;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___1_right;
		NullCheck(L_4);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_3, L_5, NULL);
		NullCheck(L_1);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_1, L_6, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = V_0;
		NullCheck(L_7);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_7, L_8, NULL);
		return L_7;
	}
}
// Method Definition Index: 132234
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_op_ExclusiveOr_m00267EEF194B53CD9CD1225B2DC58AF9F0D45BAE (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_left, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		V_0 = L_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2 = ___0_left;
		NullCheck(L_2);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_2, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___1_right;
		NullCheck(L_4);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_ExclusiveOr_m2A4003341CC48066588F5D2171A0E21B508FF8FF(L_3, L_5, NULL);
		NullCheck(L_1);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_1, L_6, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = V_0;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_8 = (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)SZArrayNew(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var, (uint32_t)2);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_9 = L_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10 = ___0_left;
		NullCheck(L_10);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
		L_11 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_10, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_11);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_12 = L_9;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13 = ___1_right;
		NullCheck(L_13);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_14;
		L_14 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_14);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = SrpInteger_Max_mFEFEDD62162E20332DFF9DC8A0576B6F1FFD80CB(L_12, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_16), L_15, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_7);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_7, L_16, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 132235
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_FromByteArray_m29EB7B4B3F92DB949B7097574EFE10F64EE2DA39 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2;
		L_2 = SrpInteger_get_Zero_m60105DD364B61CDC5BDED5740E5045B980387EB1_inline(NULL);
		return L_2;
	}

IL_000d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64((RuntimeObject*)L_3, Enumerable_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m35CA46C8E5B25D5422C711165A9A50E21E8A6F64_RuntimeMethod_var);
		___0_bytes = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_bytes;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_bytes;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&V_0), L_6, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = V_0;
		bool L_8;
		L_8 = BigInteger_op_LessThan_mD76A0CAA6AB2F6A0C712889429122ECA85261ABD(L_7, ((int64_t)0), NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_bytes;
		NullCheck(L_10);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3(L_9, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_10)->max_length)), 8)), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_11, L_12, NULL);
		V_0 = L_13;
	}

IL_0043:
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_14 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_14, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_15 = L_14;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16 = V_0;
		NullCheck(L_15);
		SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline(L_15, L_16, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_17 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_bytes;
		NullCheck(L_18);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_19), ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_18)->max_length)), 2)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_17);
		SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline(L_17, L_19, NULL);
		return L_17;
	}
}
// Method Definition Index: 132236
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8 (String_t* ___0_hex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___0_hex;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		___0_hex = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_000f:
	{
		String_t* L_2 = ___0_hex;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = SrpInteger_NormalizeWhitespace_mF06A93374D4838901A26482CE73CD1E96B5F126D(L_2, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)45));
		NullCheck(L_3);
		String_t* L_7;
		L_7 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_3, L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_0 = L_8;
		String_t* L_9 = ___0_hex;
		int32_t L_10 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_11), L_10, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_m92182386ABAEB5163081FCD12CBC07033F7CD529(L_12, L_9, L_11, NULL);
		return L_12;
	}
}
// Method Definition Index: 132237
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpInteger_ToString_m947CB13AC6614FCB8307FC9294BE2B8FA576D88D (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB850E6E333A8B753C01D34933AE43C5896C2306F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		V_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = BigInteger_ToString_mB99365A1DAD14B4BA536860304D3C7B028C6CF18((&V_1), _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)16))))
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_4, 0, ((int32_t)16), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		V_0 = L_6;
	}

IL_0032:
	{
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB850E6E333A8B753C01D34933AE43C5896C2306F, L_7, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_8;
	}
}
// Method Definition Index: 132238
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpInteger_Equals_mA715669F419DF59E15A0E6803F8553250C279FA5 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SrpInteger_op_Inequality_m245C6A7B0802A91EF96040688232932DF6DAC0D7(L_0, (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3 = ___0_other;
		NullCheck(L_3);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D(L_2, L_4, NULL);
		return L_5;
	}

IL_001b:
	{
		return (bool)0;
	}
}
// Method Definition Index: 132239
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpInteger_Equals_mCB79993E711637CE6C2E531DF973FFB3E8E334E2 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		bool L_1;
		L_1 = SrpInteger_Equals_mA715669F419DF59E15A0E6803F8553250C279FA5(__this, ((SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)IsInstClass((RuntimeObject*)L_0, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// Method Definition Index: 132240
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpInteger_GetHashCode_m47FD60EFEE9F5DE72C8D5B46E1C30273CA9F2681 (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline(__this, NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783((&V_0), NULL);
		return L_1;
	}
}
// Method Definition Index: 132241
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpInteger__cctor_m6D0F70276F3649E2BC44A69EB1408C2086CDE45F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_mA11B959763B8BA421515CB3CDE0E3032045A2D56(L_0, NULL);
		((SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_StaticFields*)il2cpp_codegen_static_fields_for(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var))->___U3CZeroU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_StaticFields*)il2cpp_codegen_static_fields_for(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var))->___U3CZeroU3Ek__BackingField), (void*)L_0);
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
// Method Definition Index: 132242
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE5C0002A77A68F7D0251A706627D8484DEDEE6E6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* L_0 = (U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9*)il2cpp_codegen_object_new(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m744E9ED08E01D57AE82ABE1AEE084BBEE64DAF3B(L_0, NULL);
		((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132243
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m744E9ED08E01D57AE82ABE1AEE084BBEE64DAF3B (U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 132244
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CMaxU3Eb__15_0_m1995FB6A75EFDFF3CB55310F9ED81CB46282FE25 (U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&___0_v), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		return L_0;
	}
}
// Method Definition Index: 132245
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CToByteArrayU3Eb__19_0_m7AD9AB5A706A038F6D257B62C907E194E4E334CE (U3CU3Ec_tF4AD6AF37E4368F98E78258A8FEFED4D3A9E5CC9* __this, uint8_t ___0_v, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_v;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
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
// Method Definition Index: 132246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpParameters__ctor_m07C8E73D312C86E892797CFA29CD0C38557F485D (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* ___0_hashAlgorithmFactory, String_t* ___1_largeSafePrime, String_t* ___2_generator, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___3_paddedLength, Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F ___4_revision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mDD32BE2D76C38E6625EC91057D33A62CEA841325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5DF27F4DE76EF53E4A57929094E9E70113DD3A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_1__ctor_mBAA7B29090E0A9064FA23146834FD6100840D9DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpParameters_U3C_ctorU3Eb__1_0_m6E21EF160DBCB645CDD5BF2BFC35F3AFD07F0819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral176DA6D89FF353B23314390F0748EB6A0259FDFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B2_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B1_1 = NULL;
	String_t* G_B4_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B3_1 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B6_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B7_1 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B9_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B8_0 = NULL;
	SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31* G_B10_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B10_1 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B12_0 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B13_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___1_largeSafePrime;
		String_t* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B2_0 = _stringLiteral176DA6D89FF353B23314390F0748EB6A0259FDFC;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2;
		L_2 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(G_B2_0, NULL);
		NullCheck(G_B2_1);
		SrpParameters_set_Prime_m53399EFD954C2EFA3AC0C9FBED58F8A5B9E42BFC_inline(G_B2_1, L_2, NULL);
		String_t* L_3 = ___2_generator;
		String_t* L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0026;
		}
		G_B3_0 = L_4;
		G_B3_1 = __this;
	}
	{
		G_B4_0 = _stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45;
		G_B4_1 = G_B3_1;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5;
		L_5 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(G_B4_0, NULL);
		NullCheck(G_B4_1);
		SrpParameters_set_Generator_m8B06421EAFFFD827DF2610EA40A35472ED8A4CBF_inline(G_B4_1, L_5, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6 = ___3_paddedLength;
		V_0 = L_6;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_7)
		{
			G_B6_0 = __this;
			goto IL_0052;
		}
		G_B5_0 = __this;
	}
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8;
		L_8 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(__this, NULL);
		NullCheck(L_8);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9;
		L_9 = SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline(L_8, NULL);
		V_1 = L_9;
		int32_t L_10;
		L_10 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_1), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B7_0 = L_10;
		G_B7_1 = G_B5_0;
		goto IL_0059;
	}

IL_0052:
	{
		int32_t L_11;
		L_11 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_0;
	}

IL_0059:
	{
		NullCheck(G_B7_1);
		SrpParameters_set_PaddedLength_m9CDFE9A74710D1468EA9CC68B39136605157EF1D_inline(G_B7_1, G_B7_0, NULL);
		Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* L_12 = ___0_hashAlgorithmFactory;
		if (L_12)
		{
			G_B9_0 = __this;
			goto IL_0069;
		}
		G_B8_0 = __this;
	}
	{
		SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31* L_13 = (SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31*)il2cpp_codegen_object_new(SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31_il2cpp_TypeInfo_var);
		SrpHash_1__ctor_mBAA7B29090E0A9064FA23146834FD6100840D9DD(L_13, SrpHash_1__ctor_mBAA7B29090E0A9064FA23146834FD6100840D9DD_RuntimeMethod_var);
		G_B10_0 = L_13;
		G_B10_1 = G_B8_0;
		goto IL_0070;
	}

IL_0069:
	{
		Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* L_14 = ___0_hashAlgorithmFactory;
		SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* L_15 = (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297*)il2cpp_codegen_object_new(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		SrpHash__ctor_m755FBA883E987AB650C9D3935A5EAEB7F395234F(L_15, L_14, (String_t*)NULL, NULL);
		G_B10_0 = ((SrpHash_1_tB5D9882FE411BD81752498C6D7EF9B93B265EE31*)(L_15));
		G_B10_1 = G_B9_0;
	}

IL_0070:
	{
		NullCheck(G_B10_1);
		SrpParameters_set_Hasher_m2F164EE9C2DD199D6542FA23BCF533157C30DD2F_inline(G_B10_1, G_B10_0, NULL);
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_16 = (Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2*)il2cpp_codegen_object_new(Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2_il2cpp_TypeInfo_var);
		Func_2__ctor_m77E71EBC41E99A5CA8251914EE878C5DF159D2D5(L_16, __this, (intptr_t)((void*)SrpParameters_U3C_ctorU3Eb__1_0_m6E21EF160DBCB645CDD5BF2BFC35F3AFD07F0819_RuntimeMethod_var), NULL);
		__this->___U3CPadU3Ek__BackingField = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPadU3Ek__BackingField), (void*)L_16);
		Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F L_17 = ___4_revision;
		V_2 = L_17;
		bool L_18;
		L_18 = Nullable_1_get_HasValue_m5DF27F4DE76EF53E4A57929094E9E70113DD3A12_inline((&V_2), Nullable_1_get_HasValue_m5DF27F4DE76EF53E4A57929094E9E70113DD3A12_RuntimeMethod_var);
		if (L_18)
		{
			G_B12_0 = __this;
			goto IL_0097;
		}
		G_B11_0 = __this;
	}
	{
		G_B13_0 = 3;
		G_B13_1 = G_B11_0;
		goto IL_009e;
	}

IL_0097:
	{
		int32_t L_19;
		L_19 = Nullable_1_GetValueOrDefault_mDD32BE2D76C38E6625EC91057D33A62CEA841325_inline((&V_2), Nullable_1_GetValueOrDefault_mDD32BE2D76C38E6625EC91057D33A62CEA841325_RuntimeMethod_var);
		G_B13_0 = ((int32_t)(L_19));
		G_B13_1 = G_B12_0;
	}

IL_009e:
	{
		NullCheck(G_B13_1);
		SrpParameters_set_Revision_m49FDDAD88574ECABFDCD7D0C5B084D5E485A1A85_inline(G_B13_1, G_B13_0, NULL);
		return;
	}
}
// Method Definition Index: 132255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpParameters_get_PaddedLength_mF86A43AB244CE3DD239C8607F96E8EA2B2C51F39 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPaddedLengthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpParameters_set_PaddedLength_m9CDFE9A74710D1468EA9CC68B39136605157EF1D (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPaddedLengthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 132257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpParameters_get_Revision_m7134DBE5DF0860ABE644BD9997704169F11E666A (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRevisionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpParameters_set_Revision_m49FDDAD88574ECABFDCD7D0C5B084D5E485A1A85 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CRevisionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 132259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = __this->___U3CPrimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpParameters_set_Prime_m53399EFD954C2EFA3AC0C9FBED58F8A5B9E42BFC (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_value;
		__this->___U3CPrimeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrimeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = __this->___U3CGeneratorU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpParameters_set_Generator_m8B06421EAFFFD827DF2610EA40A35472ED8A4CBF (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_value;
		__this->___U3CGeneratorU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeneratorU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SrpParameters_get_Hasher_m2DEFCEFBD2ED5017C408BF69CFECFDF4A689E2D5 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CHasherU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpParameters_set_Hasher_m2F164EE9C2DD199D6542FA23BCF533157C30DD2F (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHasherU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHasherU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = SrpParameters_get_Hasher_m2DEFCEFBD2ED5017C408BF69CFECFDF4A689E2D5_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_2 = (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97*)il2cpp_codegen_object_new(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97_il2cpp_TypeInfo_var);
		SrpHashFunction__ctor_m5CB8D80A4A924D42B22495C9DC837EA9BAA1EE48(L_2, L_1, (intptr_t)((void*)GetInterfaceMethodInfo(L_1, 0, ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}
}
// Method Definition Index: 132266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* SrpParameters_get_Pad_m32170038E0BBB392FE9F31B6222AA93AF793D3BE (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_0 = __this->___U3CPadU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SrpParameters_get_HashSizeBytes_mCCE8535A46CB7E9F493D8701260FD95E2054D3A0 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = SrpParameters_get_Hasher_m2DEFCEFBD2ED5017C408BF69CFECFDF4A689E2D5_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 132268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Multiplier_mDC7905A290CC92069E5D9A8C7B17B51F34BA679C (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0;
		L_0 = SrpParameters_get_Revision_m7134DBE5DF0860ABE644BD9997704169F11E666A_inline(__this, NULL);
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
			goto IL_0025;
		}
	}
	{
		goto IL_0039;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_m92182386ABAEB5163081FCD12CBC07033F7CD529(L_4, _stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62, L_3, NULL);
		return L_4;
	}

IL_0025:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_6 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_m92182386ABAEB5163081FCD12CBC07033F7CD529(L_6, _stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A, L_5, NULL);
		return L_6;
	}

IL_0039:
	{
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_7;
		L_7 = SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10;
		L_10 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(__this, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_12;
		L_12 = SrpParameters_get_Pad_m32170038E0BBB392FE9F31B6222AA93AF793D3BE_inline(__this, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13;
		L_13 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(__this, NULL);
		NullCheck(L_12);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_14;
		L_14 = Func_2_Invoke_m3B5FAB813078FD398927BE7991F39A7821271D28_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		NullCheck(L_7);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_15;
		L_15 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_7, L_11, NULL);
		return L_15;
	}
}
// Method Definition Index: 132269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpParameters_ToString_m26A17A0138ABC524691D5ABB7224F1A65FBDA21A (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B2D7511A821D674145BF3085A56453C013F6494);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A37DFFFDF7BE83D63C42F7427DDFEA9B5197E1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7AEC2C0E0771DCB063F77236103A79923FE0FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1A241E77F61CB9A9B0F5FC63BEEA0A820FB5E9A);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralED7AEC2C0E0771DCB063F77236103A79923FE0FB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		RuntimeObject* L_3;
		L_3 = SrpParameters_get_Hasher_m2DEFCEFBD2ED5017C408BF69CFECFDF4A689E2D5_inline(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(2, ISrpHash_t8FF42426F6F094F11C6885C2089A657956D6FB40_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF1A241E77F61CB9A9B0F5FC63BEEA0A820FB5E9A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7;
		L_7 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(__this, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_7, L_8, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1B2D7511A821D674145BF3085A56453C013F6494);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12;
		L_12 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(__this, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_12, L_13, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_11;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral7A37DFFFDF7BE83D63C42F7427DDFEA9B5197E1B);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		return L_16;
	}
}
// Method Definition Index: 132270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_U3C_ctorU3Eb__1_0_m6E21EF160DBCB645CDD5BF2BFC35F3AFD07F0819 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_i, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_i;
		int32_t L_1;
		L_1 = SrpParameters_get_PaddedLength_mF86A43AB244CE3DD239C8607F96E8EA2B2C51F39_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2;
		L_2 = SrpInteger_Pad_mF2028383DA6F5971303020B524B1192F561CEC6A(L_0, L_1, NULL);
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
SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_Multicast(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* currentDelegate = reinterpret_cast<SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97*>(delegatesToInvoke[i]);
		typedef SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_values, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenInst(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method)
{
	NullCheck(___0_values);
	typedef SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* (*FunctionPointerType) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_values, method);
}
SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenStatic(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method)
{
	typedef SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* (*FunctionPointerType) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_values, method);
}
SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenVirtual(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method)
{
	NullCheck(___0_values);
	return VirtualFuncInvoker0< SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_values);
}
SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenInterface(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method)
{
	NullCheck(___0_values);
	return InterfaceFuncInvoker0< SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_values);
}
SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenGenericVirtual(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method)
{
	NullCheck(___0_values);
	return GenericVirtualFuncInvoker0< SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* >::Invoke(method, ___0_values);
}
SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenGenericInterface(SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method)
{
	NullCheck(___0_values);
	return GenericInterfaceFuncInvoker0< SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* >::Invoke(method, ___0_values);
}
// Method Definition Index: 132271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpHashFunction__ctor_m5CB8D80A4A924D42B22495C9DC837EA9BAA1EE48 (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_Multicast;
}
// Method Definition Index: 132272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358 (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method) 
{
	typedef SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_values, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 132273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SrpHashFunction_BeginInvoke_mCEEFF542126ED93DA77EAF3D718832F30F90C365 (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_values;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Method Definition Index: 132274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_EndInvoke_mD33259376BDD327D0C7616482D692CD4B237D6F7 (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)__result;
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
// Method Definition Index: 132275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpServer__ctor_mBD46DE5B620E3EA950B102990927710592377E3D (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F V_1;
	memset((&V_1), 0, sizeof(V_1));
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B2_0 = NULL;
	SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* G_B2_1 = NULL;
	SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* G_B1_0 = NULL;
	SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = ___0_parameters;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0026;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F));
		Nullable_1_tBA008EF0E862406C4A8EB01091727B5DC007FA7F L_3 = V_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_4 = (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61*)il2cpp_codegen_object_new(SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61_il2cpp_TypeInfo_var);
		SrpParameters__ctor_m07C8E73D312C86E892797CFA29CD0C38557F485D(L_4, (Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28*)NULL, (String_t*)NULL, (String_t*)NULL, L_2, L_3, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		NullCheck(G_B2_1);
		SrpServer_set_Parameters_mEBC60AE6209CC9F0354110530223643658A6FEA5_inline(G_B2_1, G_B2_0, NULL);
		return;
	}
}
// Method Definition Index: 132276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5 (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = __this->___U3CParametersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpServer_set_Parameters_mEBC60AE6209CC9F0354110530223643658A6FEA5 (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = ___0_value;
		__this->___U3CParametersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* SrpServer_GenerateEphemeral_m5DD0231B4DFFCB8ADBCBF9FED314F66651B7ABDE (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, String_t* ___0_verifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SrpParameters_get_HashSizeBytes_mCCE8535A46CB7E9F493D8701260FD95E2054D3A0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2;
		L_2 = SrpInteger_RandomInteger_mDEF05584F2E1385AA46CE823D610B3E52415CA4C(L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = ___0_verifier;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5;
		L_5 = SrpServer_ComputeB_mBEB4235307052D4B1DA836F73B6FB862439E3FA6(__this, L_3, L_4, NULL);
		V_1 = L_5;
		SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* L_6 = (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E*)il2cpp_codegen_object_new(SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E_il2cpp_TypeInfo_var);
		SrpEphemeral__ctor_m56E2FC40A68FA7AB558AFE7E5F292A2C73147AA8(L_6, NULL);
		SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* L_7 = L_6;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9 = V_2;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_8, L_9, NULL);
		NullCheck(L_7);
		SrpEphemeral_set_Secret_mEA09DA5260B90A4E70ECFF47C8C2C6BFFDC62987_inline(L_7, L_10, NULL);
		SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* L_11 = L_7;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_13 = V_2;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_12, L_13, NULL);
		NullCheck(L_11);
		SrpEphemeral_set_Public_m32FC991A7152A7286F689AA0952ADB9D84167985_inline(L_11, L_14, NULL);
		return L_11;
	}
}
// Method Definition Index: 132279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpServer_ComputeB_mBEB4235307052D4B1DA836F73B6FB862439E3FA6 (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, String_t* ___0_verifier, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_2 = NULL;
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(L_0, NULL);
		V_0 = L_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_2;
		L_2 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_2);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(L_2, NULL);
		V_1 = L_3;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_4;
		L_4 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_4);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5;
		L_5 = SrpParameters_get_Multiplier_mDC7905A290CC92069E5D9A8C7B17B51F34BA679C(L_4, NULL);
		String_t* L_6 = ___0_verifier;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7;
		L_7 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_6, NULL);
		V_2 = L_7;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8 = V_2;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_9;
		L_9 = SrpInteger_op_Multiply_m254D288AB33D47A63D5E3157462520537BFF0E41(L_5, L_8, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11 = ___1_b;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_12 = V_0;
		NullCheck(L_10);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13;
		L_13 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_10, L_11, L_12, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_14;
		L_14 = SrpInteger_op_Addition_m42D8204CEAEEF818E82E36AC8EE340066047E0A0(L_9, L_13, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_15 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_16;
		L_16 = SrpInteger_op_Modulus_mB93AC766836FC26A8BB6717FCB32A61A7C6B57B4(L_14, L_15, NULL);
		return L_16;
	}
}
// Method Definition Index: 132280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpServer_ComputeS_m79DF270F6AAA74509AC69F9D40B3A5B6070BD543 (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_A, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___1_b, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___2_u, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___3_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(L_0, NULL);
		V_0 = L_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_2 = ___0_A;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3 = ___3_v;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_4 = ___2_u;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5 = V_0;
		NullCheck(L_3);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_6;
		L_6 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_3, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7;
		L_7 = SrpInteger_op_Multiply_m254D288AB33D47A63D5E3157462520537BFF0E41(L_2, L_6, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_8 = ___1_b;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_9 = V_0;
		NullCheck(L_7);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_10;
		L_10 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 132281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* SrpServer_DeriveSession_m59047BDBE480479CDB849DF3A1C982A2F4B2A18F (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, String_t* ___0_serverSecretEphemeral, String_t* ___1_clientPublicEphemeral, String_t* ___2_salt, String_t* ___3_username, String_t* ___4_verifier, String_t* ___5_clientSessionProof, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_0 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_1 = NULL;
	SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* V_2 = NULL;
	Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* V_3 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_4 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_5 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_6 = NULL;
	String_t* V_7 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_8 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_9 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_10 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_11 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_12 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_13 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_14 = NULL;
	SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* V_15 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0;
		L_0 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_0);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_1;
		L_1 = SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline(L_0, NULL);
		V_0 = L_1;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_2;
		L_2 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_2);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_3;
		L_3 = SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline(L_2, NULL);
		V_1 = L_3;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_4;
		L_4 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_4);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_5;
		L_5 = SrpParameters_get_Multiplier_mDC7905A290CC92069E5D9A8C7B17B51F34BA679C(L_4, NULL);
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_6;
		L_6 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_6);
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_7;
		L_7 = SrpParameters_get_Hash_m6E85B4B98B9697A332B818AE626DA03A01B83F10(L_6, NULL);
		V_2 = L_7;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_8;
		L_8 = SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline(__this, NULL);
		NullCheck(L_8);
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_9;
		L_9 = SrpParameters_get_Pad_m32170038E0BBB392FE9F31B6222AA93AF793D3BE_inline(L_8, NULL);
		V_3 = L_9;
		String_t* L_10 = ___0_serverSecretEphemeral;
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_11;
		L_11 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_10, NULL);
		V_4 = L_11;
		String_t* L_12 = ___1_clientPublicEphemeral;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_13;
		L_13 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_12, NULL);
		V_5 = L_13;
		String_t* L_14 = ___2_salt;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_15;
		L_15 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_14, NULL);
		V_6 = L_15;
		String_t* L_16 = ___3_username;
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_defaults.string_class))->___Empty;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_17, NULL);
		V_7 = L_18;
		String_t* L_19 = ___4_verifier;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_20;
		L_20 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_19, NULL);
		V_8 = L_20;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_21 = V_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_22;
		L_22 = SrpInteger_op_Multiply_m254D288AB33D47A63D5E3157462520537BFF0E41(L_5, L_21, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_23 = V_1;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_24 = V_4;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_25 = V_0;
		NullCheck(L_23);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_26;
		L_26 = SrpInteger_ModPow_m068113721C3E6BF45CFEC47BE654C54CE22DEAB3(L_23, L_24, L_25, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_27;
		L_27 = SrpInteger_op_Addition_m42D8204CEAEEF818E82E36AC8EE340066047E0A0(L_22, L_26, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_28 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_29;
		L_29 = SrpInteger_op_Modulus_mB93AC766836FC26A8BB6717FCB32A61A7C6B57B4(L_27, L_28, NULL);
		V_9 = L_29;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_30 = V_5;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_31 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_32;
		L_32 = SrpInteger_op_Modulus_mB93AC766836FC26A8BB6717FCB32A61A7C6B57B4(L_30, L_31, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_33;
		L_33 = SrpInteger_op_Implicit_mA1E0CFB95113264FF840AAC7A45827DDB132D33C(0, NULL);
		bool L_34;
		L_34 = SrpInteger_op_Equality_m3246591C03249E238CB822872A67ACA0ABE208BA(L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_00a7;
		}
	}
	{
		SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C* L_35 = (SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)));
		SecurityException__ctor_m0998D0D6AAB191E05A9FA69255F57B8AFCABD01A(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBA3D3B07EEC9FBCD2EA3EB3B62DD2B403AA9E2F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SrpServer_DeriveSession_m59047BDBE480479CDB849DF3A1C982A2F4B2A18F_RuntimeMethod_var)));
	}

IL_00a7:
	{
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_36 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_37;
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_39 = V_3;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_40 = V_5;
		NullCheck(L_39);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_41;
		L_41 = Func_2_Invoke_m3B5FAB813078FD398927BE7991F39A7821271D28_inline(L_39, L_40, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_41);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_38;
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_43 = V_3;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_44 = V_9;
		NullCheck(L_43);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_45;
		L_45 = Func_2_Invoke_m3B5FAB813078FD398927BE7991F39A7821271D28_inline(L_43, L_44, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_45);
		NullCheck(L_36);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_46;
		L_46 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_36, L_42, NULL);
		V_10 = L_46;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_47 = V_5;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_48 = V_4;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_49 = V_10;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_50 = V_8;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_51;
		L_51 = SrpServer_ComputeS_m79DF270F6AAA74509AC69F9D40B3A5B6070BD543(__this, L_47, L_48, L_49, L_50, NULL);
		V_11 = L_51;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_52 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_53;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_55 = V_11;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_55);
		NullCheck(L_52);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_56;
		L_56 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_52, L_54, NULL);
		V_12 = L_56;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_57 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = L_58;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_60 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_61;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_63 = V_0;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_63);
		NullCheck(L_60);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_64;
		L_64 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_60, L_62, NULL);
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_65 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = L_66;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_68 = V_1;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_68);
		NullCheck(L_65);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_69;
		L_69 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_65, L_67, NULL);
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_70;
		L_70 = SrpInteger_op_ExclusiveOr_m00267EEF194B53CD9CD1225B2DC58AF9F0D45BAE(L_64, L_69, NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_70);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_70);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = L_59;
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_72 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_73 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = L_73;
		String_t* L_75 = V_7;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_75);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_75);
		NullCheck(L_72);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_76;
		L_76 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_72, L_74, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_76);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_76);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = L_71;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_78 = V_6;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_78);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = L_77;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_80 = V_5;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_80);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_81 = L_79;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_82 = V_9;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_82);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_83 = L_81;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_84 = V_12;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_84);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_84);
		NullCheck(L_57);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_85;
		L_85 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_57, L_83, NULL);
		V_13 = L_85;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_86 = V_13;
		V_14 = L_86;
		String_t* L_87 = ___5_clientSessionProof;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_88;
		L_88 = SrpInteger_FromHex_m3BCCACC213BED8BEC438D9FC0DB17468CEBC1FC8(L_87, NULL);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_89 = V_14;
		bool L_90;
		L_90 = SrpInteger_op_Inequality_m245C6A7B0802A91EF96040688232932DF6DAC0D7(L_88, L_89, NULL);
		if (!L_90)
		{
			goto IL_016b;
		}
	}
	{
		SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C* L_91 = (SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)));
		SecurityException__ctor_m0998D0D6AAB191E05A9FA69255F57B8AFCABD01A(L_91, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE004F8A0E5DDDC4238F9402594F1B9C0C2566D58)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SrpServer_DeriveSession_m59047BDBE480479CDB849DF3A1C982A2F4B2A18F_RuntimeMethod_var)));
	}

IL_016b:
	{
		SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* L_92 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_93 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_94 = L_93;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_95 = V_5;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_95);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_95);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_94;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_97 = V_13;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_97);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_97);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_98 = L_96;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_99 = V_12;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, L_99);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_99);
		NullCheck(L_92);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_100;
		L_100 = SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline(L_92, L_98, NULL);
		V_15 = L_100;
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_101 = (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F*)il2cpp_codegen_object_new(SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F_il2cpp_TypeInfo_var);
		SrpSession__ctor_m696E1FF5BD0C894B3775A48FB639D1C66CEF8A27(L_101, NULL);
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_102 = L_101;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_103 = V_12;
		il2cpp_codegen_initobj((&V_16), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_104 = V_16;
		NullCheck(L_103);
		String_t* L_105;
		L_105 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_103, L_104, NULL);
		NullCheck(L_102);
		SrpSession_set_Key_mDE4DCECFFE204547FC50409B5B7E73A6C3093FCE_inline(L_102, L_105, NULL);
		SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* L_106 = L_102;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_107 = V_15;
		il2cpp_codegen_initobj((&V_16), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_108 = V_16;
		NullCheck(L_107);
		String_t* L_109;
		L_109 = SrpInteger_ToHex_m9779E39225C5DA838DEE11723933FD569F9ED198(L_107, L_108, NULL);
		NullCheck(L_106);
		SrpSession_set_Proof_m6160030C2907656B5C38695EF34220F01F9EA9A6_inline(L_106, L_109, NULL);
		return L_106;
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
// Method Definition Index: 132282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpSession_get_Key_m34F7A0AAEAFE8B63B01700AB36567A1E6C72BCC2 (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpSession_set_Key_mDE4DCECFFE204547FC50409B5B7E73A6C3093FCE (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CKeyU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SrpSession_get_Proof_mF18582433DD47C6C528265D0414D73BFBBEAF3F6 (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProofU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpSession_set_Proof_m6160030C2907656B5C38695EF34220F01F9EA9A6 (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CProofU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProofU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SrpSession__ctor_m696E1FF5BD0C894B3775A48FB639D1C66CEF8A27 (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) 
{
	{
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
// Method Definition Index: 132287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpUtility_IsValidInteger_mA23BC4BD551E2E2BA58B49FB9BAA21E898BCD0D9 (String_t* ___0_hexString, int32_t ___1_requiredLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_hexString;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_2 = ___0_hexString;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		int32_t L_4 = ___1_requiredLength;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (bool)0;
	}

IL_0013:
	{
	}
	try
	{
		String_t* L_5 = ___0_hexString;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_6 = V_0;
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_7 = (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936*)il2cpp_codegen_object_new(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger__ctor_m92182386ABAEB5163081FCD12CBC07033F7CD529(L_7, L_5, L_6, NULL);
		V_1 = (bool)1;
		goto IL_002d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0028;
		}
		throw e;
	}

CATCH_0028:
	{
		RuntimeObject* L_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002d;
	}

IL_002d:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 132288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpUtility_IsValidSalt_m48FEF991424E5DA3E100732D00FF9CA69DD863AD (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_parameters, String_t* ___1_salt, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___1_salt;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_1 = ___0_parameters;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SrpParameters_get_HashSizeBytes_mCCE8535A46CB7E9F493D8701260FD95E2054D3A0(L_1, NULL);
		bool L_3;
		L_3 = SrpUtility_IsValidInteger_mA23BC4BD551E2E2BA58B49FB9BAA21E898BCD0D9(L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)), NULL);
		return L_3;
	}
}
// Method Definition Index: 132289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SrpUtility_IsValidVerifier_mF526B679EF1AFF5045A1371C816ACC19323DA013 (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_parameters, String_t* ___1_verifier, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___1_verifier;
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_1 = ___0_parameters;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SrpParameters_get_PaddedLength_mF86A43AB244CE3DD239C8607F96E8EA2B2C51F39_inline(L_1, NULL);
		bool L_3;
		L_3 = SrpUtility_IsValidInteger_mA23BC4BD551E2E2BA58B49FB9BAA21E898BCD0D9(L_0, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 132174
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpClient_set_Parameters_m8D51A3D20A9B9989559E996C20B5CE8B85BBC0A2_inline (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = ___0_value;
		__this->___U3CParametersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132173
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* SrpClient_get_Parameters_mF22B91E051AF5B37F33ABC0002EBF36E95F2E185_inline (SrpClient_t836909B3BE7A8B3B6154EB25EBCD55E7A9F7F41D* __this, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = __this->___U3CParametersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132272
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpHashFunction_Invoke_mCF8DB1FCD39294D639F31BA4E1E22BC0F5753358_inline (SrpHashFunction_tA6F37AF91A5D160203B6700B2D7B805E618C7E97* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_values, const RuntimeMethod* method) 
{
	typedef SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_values, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 132259
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Prime_mAFD8B0B1DEF2DFA4D273B3F6A41439CC1CAE0D73_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = __this->___U3CPrimeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132261
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpParameters_get_Generator_mFC859117A47A4BB9385C18D9586037BA90E68D81_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = __this->___U3CGeneratorU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132188
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpEphemeral_set_Secret_mEA09DA5260B90A4E70ECFF47C8C2C6BFFDC62987_inline (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSecretU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSecretU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132186
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpEphemeral_set_Public_m32FC991A7152A7286F689AA0952ADB9D84167985_inline (SrpEphemeral_t9298B1961029E35EEAF5C828B08E928F2D6E520E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPublicU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132266
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* SrpParameters_get_Pad_m32170038E0BBB392FE9F31B6222AA93AF793D3BE_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		Func_2_t3A60B1FC6F6BE73C4C27DD873DA5B0AD7EF9B6B2* L_0 = __this->___U3CPadU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132283
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpSession_set_Key_mDE4DCECFFE204547FC50409B5B7E73A6C3093FCE_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CKeyU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132285
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpSession_set_Proof_m6160030C2907656B5C38695EF34220F01F9EA9A6_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CProofU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProofU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132284
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SrpSession_get_Proof_mF18582433DD47C6C528265D0414D73BFBBEAF3F6_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProofU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132282
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SrpSession_get_Key_m34F7A0AAEAFE8B63B01700AB36567A1E6C72BCC2_inline (SrpSession_tC5D44DBA752ACAD1DA9CF0E7F3ECDA1C660AFD3F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CKeyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132191
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* SrpHash_get_HasherFactory_mA19A5A43F939EAD42BF1E170594C1A517B04B18B_inline (SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tBF14795E6C3D3B4819D02B2EFD0139D9C31ABD28* L_0 = __this->___U3CHasherFactoryU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132198
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SrpHash_get_EmptyBuffer_mA2BEB5D480DBDE443366D81C59D49D43A579E5C7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_StaticFields*)il2cpp_codegen_static_fields_for(SrpHash_t07DE36906F2C6E1B0E09510AA579C8A6450AA297_il2cpp_TypeInfo_var))->___U3CEmptyBufferU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132215
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpInteger_set_HexLength_m980A82C9BF020A94439A39EE72EEFB40D4052FC9_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = ___0_value;
		__this->___U3CHexLengthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 132213
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpInteger_set_Value_m268EB9E52133BDC839A38D15F12A78142EFA7095_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CValueU3Ek__BackingField))->____bits), (void*)NULL);
		return;
	}
}
// Method Definition Index: 132932
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnZeroInt;
		return L_0;
	}
}
// Method Definition Index: 132212
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F SrpInteger_get_Value_m27E27D3CD76B78F49D56EDAA49EF294CFF37D43F_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132214
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 SrpInteger_get_HexLength_m04413F95BBF847CF445DCDB33F6A3B5B5DF25877_inline (SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___U3CHexLengthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132211
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* SrpInteger_get_Zero_m60105DD364B61CDC5BDED5740E5045B980387EB1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var);
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ((SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_StaticFields*)il2cpp_codegen_static_fields_for(SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936_il2cpp_TypeInfo_var))->___U3CZeroU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132933
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnOneInt;
		return L_0;
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
// Method Definition Index: 132260
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Prime_m53399EFD954C2EFA3AC0C9FBED58F8A5B9E42BFC_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_value;
		__this->___U3CPrimeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrimeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132262
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Generator_m8B06421EAFFFD827DF2610EA40A35472ED8A4CBF_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpInteger_tB642ECAC8A31919D6B4C47BB8274FD3F57621936* L_0 = ___0_value;
		__this->___U3CGeneratorU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeneratorU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132256
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_PaddedLength_m9CDFE9A74710D1468EA9CC68B39136605157EF1D_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPaddedLengthU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 132264
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Hasher_m2F164EE9C2DD199D6542FA23BCF533157C30DD2F_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CHasherU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHasherU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132258
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpParameters_set_Revision_m49FDDAD88574ECABFDCD7D0C5B084D5E485A1A85_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CRevisionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 132263
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SrpParameters_get_Hasher_m2DEFCEFBD2ED5017C408BF69CFECFDF4A689E2D5_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CHasherU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132257
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SrpParameters_get_Revision_m7134DBE5DF0860ABE644BD9997704169F11E666A_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRevisionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SrpParameters_get_PaddedLength_mF86A43AB244CE3DD239C8607F96E8EA2B2C51F39_inline (SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPaddedLengthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 132277
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SrpServer_set_Parameters_mEBC60AE6209CC9F0354110530223643658A6FEA5_inline (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* ___0_value, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = ___0_value;
		__this->___U3CParametersU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParametersU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 132276
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* SrpServer_get_Parameters_m12F7A88AD0E6CCD6E1F57043A31F259B93256CF5_inline (SrpServer_t1AAF6AE732F9CDDE6C0E735A34C9E17274AB69FF* __this, const RuntimeMethod* method) 
{
	{
		SrpParameters_t96AE2E12DD5B3C95ADD89883669C0996040D1A61* L_0 = __this->___U3CParametersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 1011
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_gshared_inline (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1009
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_gshared_inline (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 2501
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
// Method Definition Index: 2503
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
