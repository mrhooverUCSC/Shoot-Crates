﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
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

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6;
struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;

IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer_0;
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer_0;
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer_0;
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer_0;
};

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer_0;
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer_0;
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer_0;
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer_0;
};

struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};

struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer_0;
};

struct MemberInfo_t  : public RuntimeObject
{
};

struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	String_t* ___Empty_6;
};

struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	StringBuilder_t* ___m_ChunkPrevious_1;
	int32_t ___m_ChunkLength_2;
	int32_t ___m_ChunkOffset_3;
	int32_t ___m_MaxCapacity_4;
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

struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

struct xxHash3_t1B0090718977D51798C540A03964F9CB74D52462  : public RuntimeObject
{
};

struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor_0;
};

struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};

struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};

struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value_0;
};

struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};

struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

struct NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004 
{
	NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___m_NextBlock_0;
	int32_t ___m_NumItems_1;
};

struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value_0;
};

struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};

struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value_0;
};

struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value_0;
};

struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value_0;
};

struct UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Block_0;
	int32_t ___OffsetInFirstBlock_1;
	int32_t ___ElementCount_2;
	int32_t ___LastOffset_3;
	int32_t ___NumberOfBlocks_4;
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

struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F 
{
	uint32_t ___x_0;
	uint32_t ___y_1;
};

struct uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F_StaticFields
{
	uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F ___zero_2;
};

struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x_0;
	uint32_t ___y_1;
	uint32_t ___z_2;
	uint32_t ___w_3;
};

struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9_StaticFields
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___zero_4;
};

struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index_0;
	uint16_t ___Version_1;
};

struct Array_t1E323B687FA2B776FFD4500566C5078C058371A7 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t1E323B687FA2B776FFD4500566C5078C058371A7__padding[1];
	};
};

struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};

struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	uint8_t* ___m_pointer_1;
	int64_t ___m_bytes_2;
	int64_t ___m_current_3;
	int64_t ___m_allocations_4;
};

struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	uint8_t* ___Ptr_0;
	int32_t ___Size_1;
	int32_t ___Offset_2;
};

struct U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11__padding[8192];
	};
};

struct ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3 
{
	void* ___Ptr_0;
	int32_t ___Length_1;
};

struct ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB 
{
	void* ___Ptr_0;
	UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___ListData_1;
};

struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_RemainingItemCount_4;
	int32_t ___m_LastBlockSize_5;
};

struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_ForeachIndex_4;
	int32_t ___m_ElementCount_5;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock_6;
	int32_t ___m_FirstOffset_7;
	int32_t ___m_NumberOfBlocks_8;
	int32_t ___m_ThreadIndex_9;
};

struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};

struct LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_1_forAlignmentOnly;
		};
	};
};

struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};

struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Acc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_1_OffsetPadding[64];
			uint8_t ___Buffer_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_1_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_2_OffsetPadding[320];
			int32_t ___IsHash64_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_2_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_3_OffsetPadding[324];
			int32_t ___BufferedSize_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_3_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding[328];
			int32_t ___NbStripesSoFar_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_5_OffsetPadding[336];
			int64_t ___TotalLength_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_5_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_6_OffsetPadding[344];
			uint64_t ___Seed_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_6_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_7_OffsetPadding[352];
			uint8_t ___SecretKey_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_7_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_8_OffsetPadding[540];
			uint8_t ____PadEnd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_8_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_8_forAlignmentOnly;
		};
	};
};

struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};

struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87 
{
	intptr_t ___m_FirstBlock_0;
	int32_t ___m_NumBlocks_1;
	int32_t ___m_MaxBlocks_2;
	int32_t ___m_AllocLock_4;
};

struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52 
{
	intptr_t ___m_FirstBlock_0;
	intptr_t ___m_LastBlock_1;
	int32_t ___m_MaxItems_2;
	int32_t ___m_CurrentRead_3;
	uint8_t* ___m_CurrentWriteBlockTLS_4;
};

struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};

struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_1_OffsetPadding[8];
			uint8_t* ___keys_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_1_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_2_OffsetPadding[16];
			uint8_t* ___next_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_2_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_3_OffsetPadding[24];
			uint8_t* ___buckets_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_3_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_4_OffsetPadding[32];
			int32_t ___keyCapacity_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_4_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_5_OffsetPadding[36];
			int32_t ___bucketCapacityMask_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_5_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_6_OffsetPadding[40];
			int32_t ___allocatedIndexLength_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_6_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___firstFreeTLS_7_OffsetPadding[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___firstFreeTLS_7_OffsetPadding_forAlignmentOnly[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS_7_forAlignmentOnly;
		};
	};
};

struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B 
{
	void* ___Ptr_0;
	int32_t ___Length_1;
	int32_t ___unused_2;
	int32_t ___Capacity_3;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_4;
};

struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};

struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6 
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_1;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C** ___Blocks_2;
	int32_t ___BlockCount_3;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Free_4;
	UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___Ranges_5;
	int32_t ___RangeCount_6;
};

struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer_0;
	int32_t ___Items_1;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_2;
};

struct Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9 
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 ___m_Reader_0;
};

struct Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F 
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F ___m_Writer_0;
};

struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State_4;
};

struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	int32_t ___SECRET_LIMIT_0;
	int32_t ___NB_STRIPES_PER_BLOCK_1;
	int32_t ___INTERNAL_BUFFER_SIZE_2;
	int32_t ___INTERNAL_BUFFER_STRIPES_3;
};

struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
};

struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range_0;
	int32_t ___BytesPerItem_1;
	int32_t ___AllocatedItems_2;
	uint8_t ___Log2Alignment_3;
	uint8_t ___Padding0_4;
	uint16_t ___Padding1_5;
	uint32_t ___Padding2_6;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___items0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___ptr0, int32_t* ___output1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared (void* ___ptr0, int32_t* ___output1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
inline String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared)(___args0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
inline String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared)(___args0, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared)(___args0, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared)(___args0, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared)(___args0, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared)(___args0, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared)(___args0, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared)(___args0, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared)(___args0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_Hash128_mE0C3239D53F8C4F524698AAFF8CD38C982F47E8D (void* ___input0, int64_t ___length1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F xxHash3_Hash64_mD1BBA0284A3241AFD77FF83F1F8250B7DE0BE501 (void* ___input0, int64_t ___length1, const RuntimeMethod* method) ;
inline Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___items0, const RuntimeMethod* method)
{
	return ((  Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, int32_t, const RuntimeMethod*))AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared)(__this, ___items0, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m85FEAD596A8E327F7B6820310B7FBD9822BA735C_inline (int32_t ___x0, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, const RuntimeMethod* method) ;
inline int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, int32_t, const RuntimeMethod*))AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared)(__this, ___block0, ___items1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
inline uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51 (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* (*) (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* (*) (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0 (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* (*) (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81 (uint64_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  uint64_t* (*) (uint64_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9 (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* (*) (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* (*) (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* (*) (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* (*) (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method)
{
	return ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared)(___oldPointer0, ___oldCount1, ___newCount2, ___allocator3, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, int32_t ___size0, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, int32_t ___size0, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	((  void (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared)((Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*)__this, ___value0, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared)(method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084 (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared)(___source0, ___index1, method);
}
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared)(__this, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
inline void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline (void* ___ptr0, int32_t* ___output1, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline)(___ptr0, ___output1, method);
}
inline void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared)(__this, ___value0, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)(__this, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___structSize0, const RuntimeMethod* method) ;
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)(__this, ___value0, ___allocator1, method);
}
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)(__this, ___length0, method);
}
inline bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___value0, method);
}
inline int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___location0, const RuntimeMethod* method) ;
inline void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, int32_t ___sizeOf0, int32_t ___alignOf1, void* ___ptr2, int32_t ___length3, const RuntimeMethod* method) ;
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared)(__this, ___list0, method);
}
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, void*, int32_t, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared)(__this, ___ptr0, ___length1, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___size0, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___size0, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
inline Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB (const RuntimeMethod* method)
{
	return ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, bool ___val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, const RuntimeMethod* method) ;
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
inline Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
inline Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
inline Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared)(method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___len0, int32_t ___imm81, int32_t ___intRes22, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960 (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235 (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8 (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455 (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1 (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared)(___ptr0, ___max1, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3 (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared)(___ptr0, ___max1, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171 (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared)(___ptr0, ___max1, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared)(___ptr0, ___max1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___input0, int32_t ___length1, const RuntimeMethod* method) ;
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)(__this, ___input0, method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m07FD7550AAB5D94312E99571B112D652E8230360_inline (uint32_t ___x0, const RuntimeMethod* method) ;
inline void UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539 (void* ___ptr0, int32_t* ___output1, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539_gshared)(___ptr0, ___output1, method);
}
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m646B71E5782A91A5A247FFAEEA04D44FB31AA619_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m5714D44FF454CB672C9F04F1316533DAD6C6BCBB_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mBB787943D3DB158E741B5FF2B66EFB90237F837C_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t G_B3_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___args0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_5, NULL);
		V_2 = L_6;
		goto IL_008e;
	}

IL_002c:
	{
		StringBuilder_t* L_7 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_7, NULL);
		V_0 = L_7;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args0;
		V_3 = L_10;
		V_4 = 0;
		goto IL_005f;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		StringBuilder_t* L_15 = V_0;
		RuntimeObject* L_16 = V_5;
		String_t* L_17;
		L_17 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005f:
	{
		int32_t L_20 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		V_2 = L_30;
		goto IL_008e;
	}

IL_008e:
	{
		String_t* L_31 = V_2;
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 xxHash3_Hash128_TisIl2CppFullySharedGenericStruct_mE743F633A7F9226982E2F9BFC9CF6CE5BC2CE5C7_gshared (Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___input0;
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 L_3;
		L_3 = xxHash3_Hash128_mE0C3239D53F8C4F524698AAFF8CD38C982F47E8D(L_1, ((int64_t)L_2), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F xxHash3_Hash64_TisIl2CppFullySharedGenericStruct_m51B6947FCCED4C783BA41B5021913619A76769EA_gshared (Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___input0;
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint2_t157753816C23B82EB918C3D3AFCFDDE06A04C05F L_3;
		L_3 = xxHash3_Hash64_mD1BBA0284A3241AFD77FF83F1F8250B7DE0BE501(L_1, ((int64_t)L_2), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, int32_t ___items0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___items0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, (&V_0), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21_AdjustorThunk (RuntimeObject* __this, int32_t ___items0, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 _returnValue;
	_returnValue = AllocatorHandle_AllocateBlock_TisIl2CppFullySharedGenericStruct_mC112EEF2D397B738A58A313DBEDAC6A3C0884C21(_thisAdjusted, ___items0, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_0 = ___block0;
		il2cpp_codegen_initobj((&V_0), sizeof(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3));
		il2cpp_codegen_initobj((&V_1), sizeof(Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC));
		int32_t L_1 = ___items1;
		(&V_1)->___Items_1 = L_1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = (*(AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*)__this);
		(&V_1)->___Allocator_2 = L_2;
		Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC L_3 = V_1;
		(&V_0)->___Range_0 = L_3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___BytesPerItem_1 = L_4;
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_6;
		L_6 = math_tzcnt_m85FEAD596A8E327F7B6820310B7FBD9822BA735C_inline(L_5, NULL);
		int32_t L_7;
		L_7 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(3, L_6, NULL);
		Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F((&V_0), ((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))), NULL);
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 L_8 = V_0;
		*(Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3*)L_0 = L_8;
		Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* L_9 = ___block0;
		int32_t L_10;
		L_10 = AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9(__this, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24_AdjustorThunk (RuntimeObject* __this, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___block0, int32_t ___items1, const RuntimeMethod* method)
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AllocatorHandle_TryAllocateBlock_TisIl2CppFullySharedGenericStruct_m60B17BC434ABCADEE353507AE370842FE51C0D24(_thisAdjusted, ___block0, ___items1, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_TisIl2CppFullySharedGenericStruct_mD730785C3E9637938098A9F0A235B89FEE3AE7CA_gshared (Il2CppFullySharedGenericStruct* ___pointer0, int64_t ___count1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		int64_t L_0 = ___count1;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		Il2CppFullySharedGenericStruct* L_2 = ___pointer0;
		int64_t L_3 = V_0;
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1((void*)L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_TisIl2CppFullySharedGenericStruct_m663B37B7863FEFA92383BB1F3457755E0FCF9C76_gshared (Il2CppFullySharedGenericStruct* ___dest0, Il2CppFullySharedGenericStruct* ___src1, int64_t ___count2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	{
		int64_t L_0 = ___count2;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = ((int64_t)il2cpp_codegen_multiply(L_0, ((int64_t)L_1)));
		Il2CppFullySharedGenericStruct* L_2 = ___dest0;
		Il2CppFullySharedGenericStruct* L_3 = ___src1;
		int64_t L_4 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_2, (void*)L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Set_TisIl2CppFullySharedGenericStruct_mE1A1DAD75AFF2C9365C8CDA0E40CBC5831526483_gshared (Il2CppFullySharedGenericStruct* ___pointer0, int64_t ___count1, Il2CppFullySharedGenericStruct ___t2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = 0;
		goto IL_001f;
	}

IL_000a:
	{
		Il2CppFullySharedGenericStruct* L_1 = ___pointer0;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC;
		il2cpp_codegen_memcpy(L_4, ___t2, SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), L_4, SizeOf_T_tC2AD72A0897436B221D24DCD3322E21010B1E4AC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), (void*)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		int64_t L_7 = ___count1;
		if ((((int64_t)((int64_t)L_6)) < ((int64_t)L_7)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Unmanaged_Allocate_TisIl2CppFullySharedGenericStruct_m057D0CA6874E6719E10B462BACECFDC4352FE9AE_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___allocator0;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), ((int64_t)1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		uint8_t* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		uint8_t* L_3;
		L_3 = Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_m243D8201F69E8B9517904DD82D2AF7681CC70844_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_3;
		L_3 = Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mB841F028990B75239A6FDF58EBC78E296907E772_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_3;
		L_3 = Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m4D14134CC0BDD6353804BD8F2032D3B2D2F0C494_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_3;
		L_3 = Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEE0CCF17012BE1CA95605693A9DC3BC6AACCFB64_gshared (uint64_t* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint64_t* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		uint64_t* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		uint64_t* L_3;
		L_3 = Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_m44E1299744F197B4690015E38D6E5EB21AFDC0AC_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_3;
		L_3 = Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m171CCBC5CCBB5C736EDB2FB360548D63C31C9A61_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_3;
		L_3 = Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m56429A658B96166EFAF5B25D6378FE8C979E46D0_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_3;
		L_3 = Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m0E6BEFF6F1045D176A76A94150425282A3F0232A_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_3;
		L_3 = Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		Il2CppFullySharedGenericStruct* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m7B99D1F06742355AC760F246D818C9979FADF666_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___pointer0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_1 = ___pointer0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___allocator1;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_3;
		L_3 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* L_1 = (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)(&__this->___m_Reader_0);
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___value0, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_1, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB(_thisAdjusted, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor_0 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor_0), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		int32_t L_3;
		L_3 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, (Il2CppFullySharedGenericStruct*)L_3);
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		int32_t* L_3 = ___value0;
		UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_inline((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9_AdjustorThunk (RuntimeObject* __this, int32_t* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17201F199E61247BB0595C13E633DDC1D94569F9(_thisAdjusted, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		Il2CppFullySharedGenericStruct* L_3 = ___value0;
		((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___value0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___value0;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = V_1;
		void* L_9;
		L_9 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_8, NULL);
		V_2 = L_9;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___value0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10);
		void* L_12;
		L_12 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		void* L_13 = V_2;
		int32_t L_14 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, L_13, ((int64_t)L_14), NULL);
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___value0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___value0, ___allocator1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___length0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___length0;
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___length0;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		int32_t* L_4 = ___length0;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		return L_7;
	}

IL_001b:
	{
		return (void*)(((uintptr_t)0));
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___length0, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___length0, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
	{
		il2cpp_codegen_memcpy(L_0, ___value0, SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05(_thisAdjusted, ___value0, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
	{
		void* L_0 = (void*)__this->___Ptr_0;
		int32_t L_1 = (int32_t)__this->___Length_1;
		il2cpp_codegen_memcpy(L_2, ___value0, SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386(_thisAdjusted, ___value0, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
	int32_t V_0 = 0;
	{
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* L_0 = (UnsafeList_t821320446016467933FF194D701C7EDDC23E538B*)__this->___ListData_1;
		NullCheck(L_0);
		int32_t* L_1 = (int32_t*)(&L_0->___Length_1);
		int32_t L_2;
		L_2 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		void* L_3 = (void*)__this->___Ptr_0;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, ___value0, SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471(_thisAdjusted, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_2 = ___list0;
		void* L_3 = (void*)L_2.___Ptr_0;
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_4 = ___list0;
		int32_t L_5 = (int32_t)L_4.___Length_1;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_3, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_AdjustorThunk (RuntimeObject* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___list0, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476(_thisAdjusted, ___list0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_2 = ___ptr0;
		int32_t L_3 = ___length1;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_AdjustorThunk (RuntimeObject* __this, void* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727(_thisAdjusted, ___ptr0, ___length1, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		uint8_t* L_1 = (uint8_t*)__this->___m_CurrentPtr_2;
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = (uint8_t*)__this->___m_CurrentBlockEnd_3;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) > ((uintptr_t)L_4))))
		{
			goto IL_002f;
		}
	}
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_5 = (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)__this->___m_CurrentBlock_1;
		NullCheck(L_5);
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)L_5->___Next_0;
		NullCheck(L_6);
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_7 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_6->___Data_1);
		uint8_t* L_8 = (uint8_t*)(&L_7->___FixedElementField_0);
		V_1 = (uint8_t*)((uintptr_t)L_8);
	}

IL_002f:
	{
		uint8_t* L_9 = V_1;
		Il2CppFullySharedGenericStruct* L_10;
		L_10 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_10;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___value0, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_1, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___value0, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___value0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		Il2CppFullySharedGenericStruct* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		Il2CppFullySharedGenericStruct* L_13 = ___dptr0;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0054:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0058:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___n4;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		Il2CppFullySharedGenericStruct* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_11, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10);
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		Il2CppFullySharedGenericStruct* L_13 = ___dptr0;
		int32_t L_14 = V_1;
		uint32_t L_15 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_16 = V_3;
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), L_17, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), (int32_t)L_15)))), (void*)L_17);
	}

IL_0053:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0057:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___n4;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		uint8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		uint8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_14;
		L_14 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_15 = V_7;
		uint8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_25;
		L_25 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_26 = V_8;
		uint8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_29;
		L_29 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_30 = V_8;
		uint8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_39;
		L_39 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_40 = V_7;
		uint8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_120;
		L_120 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint8_t);
		uint8_t L_124 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint8_t));
		uint8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		int16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		int16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_14;
		L_14 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_15 = V_7;
		int16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_25;
		L_25 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_26 = V_8;
		int16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_29;
		L_29 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_30 = V_8;
		int16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_39;
		L_39 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_40 = V_7;
		int16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_50 = V_7;
		int16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_120;
		L_120 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int16_t);
		int16_t L_124 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int16_t));
		int16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	int8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		int8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		int8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_14;
		L_14 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_15 = V_7;
		int8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_25;
		L_25 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_26 = V_8;
		int8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_29;
		L_29 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_30 = V_8;
		int8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_39;
		L_39 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_40 = V_7;
		int8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_50 = V_7;
		int8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_120;
		L_120 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int8_t);
		int8_t L_124 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int8_t));
		int8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		uint16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		uint16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_14;
		L_14 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_15 = V_7;
		uint16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_25;
		L_25 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_26 = V_8;
		uint16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_29;
		L_29 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_30 = V_8;
		uint16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_39;
		L_39 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_40 = V_7;
		uint16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_120;
		L_120 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint16_t);
		uint16_t L_124 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint16_t));
		uint16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_9 = L_3;
	const Il2CppFullySharedGenericStruct L_15 = L_3;
	const Il2CppFullySharedGenericStruct L_26 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_40 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_124 = L_3;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_27 = L_16;
	const Il2CppFullySharedGenericStruct L_31 = L_16;
	const Il2CppFullySharedGenericStruct L_41 = L_16;
	const Il2CppFullySharedGenericStruct L_51 = L_16;
	const Il2CppFullySharedGenericStruct L_125 = L_16;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	Il2CppFullySharedGenericStruct V_8 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_8, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Il2CppFullySharedGenericStruct V_12 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_12, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		Il2CppFullySharedGenericStruct* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_9, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_8, L_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_004f:
	{
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_14;
		L_14 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_15, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_16, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_14, L_15, L_16);
		V_9 = L_17;
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ad:
	{
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_25;
		L_25 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_26, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_27, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_29;
		L_29 = ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(il2cpp_rgctx_method(method->rgctx_data, 6));
		il2cpp_codegen_memcpy(L_30, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_31, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0102:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_39;
		L_39 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_40, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_41, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_39, L_40, L_41);
		V_9 = L_42;
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_0134:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_8, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_49, L_50, L_51);
		V_9 = L_52;
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		V_9 = (bool)1;
	}

IL_0164:
	{
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		V_6 = 0;
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
		G_B48_0 = L_70;
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02a5;
	}

IL_01ef:
	{
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
		G_B58_0 = L_81;
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
		G_B59_0 = G_B58_0;
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_02a5;
	}

IL_0237:
	{
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
		G_B68_0 = L_95;
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02a5;
	}

IL_025f:
	{
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		int32_t L_104 = V_3;
		V_11 = L_104;
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		V_5 = 0;
		V_1 = (bool)0;
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_120;
		L_120 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericStruct* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_124, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_125, V_12, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_02e4:
	{
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_143 = V_5;
		return L_143;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint8_t));
		uint8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int8_t V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint16_t));
		uint16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_1, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppFullySharedGenericStruct* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_11 = ___max1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint8_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		uint8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint8_t);
		uint8_t L_7 = ___allOnesT2;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint8_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int16_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		int16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int16_t);
		int16_t L_7 = ___allOnesT2;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		int16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int16_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int8_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		int8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int8_t);
		int8_t L_7 = ___allOnesT2;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		int8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int8_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint16_t*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint16_t);
		uint16_t L_7 = ___allOnesT2;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		uint16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint16_t));
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___len0, int32_t ___imm81, Il2CppFullySharedGenericStruct ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_1);
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_7, ___allOnesT2, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), L_7, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))), (void*)L_7);
		goto IL_0049;
	}

IL_0038:
	{
		Il2CppFullySharedGenericStruct* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_0049:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		il2cpp_codegen_memcpy(L_10, ___allOnesT7, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		il2cpp_codegen_memcpy(L_14, ___allOnesT5, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___input0;
		void* L_1;
		L_1 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___input0, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*>(__this + _offset);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___input0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___count0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int64_t L_0 = ___count0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___allocator1;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Allocate_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_mCDBD1381CA662F016D4B6003D9BA89FE592EB6D8_gshared (int64_t ___count0, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int64_t L_0 = ___count0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___allocator1;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_2;
		L_2 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3((MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___pointer0, int64_t ___count1, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___pointer0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		Il2CppFullySharedGenericStruct* L_1 = ___pointer0;
		int64_t L_2 = ___count1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator2;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint8_t*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* Array_Resize_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mF823D88C2CF36E927F7071E5ED1571B8DC2E7D51_gshared (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mD17298D011DA1F41116B52EA79F5E53E3C07037F(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004_mB6891C7A8270EA99BA8C7616A4B23733FE8BED87(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueBlockHeader_tD74DEA5A5D8C910AA5ED04C5E89F2FE1B0521004*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* Array_Resize_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m0B0F25C920A5E2CC4CB3CF98A4E37180ADA06A7E_gshared (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_mC7FEAA8F718320B4F881566EB9C8D910A41CC37A(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87_m8EF809058620A5D5C36B4732089B9D4DA178136D(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* Array_Resize_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mE421AA6A3572FBA2A310DC7DE4AFBEE98D2623E0_gshared (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_m494294FC3C525306A1D00A1A452B1000C14A7D40(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisNativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52_mD305539B45883F475C5E06B9227D6142D41C6823(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81_gshared (uint64_t* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint64_t* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint64_t*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* Array_Resize_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_m1404051BE7183232F4A4A68FA27E9D7F3BEDD82A_gshared (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mFAE13C18A7E723024962102235BF4E7583DEBA12(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C_mC71BBE7EDAC558B95116B6EA95D1D9C63699E76A(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* Array_Resize_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m90B88A1884F1A91C4B83468A9976D250874EB82E_gshared (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m3255613869FAF06B5E4EF6B772F320B8A7588B25(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6_m81BFA1220D394DE10FC4D211B9919C649240E3ED(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* Array_Resize_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_mEEBD12050A82980C398162883390288AFBF55ACF_gshared (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m353BE707CCBB0AF7B60C3BAC8805A037DFF0B60D(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9_m9BC17B055F4BE00A8F2F73B5BCA2E3F443D4249C(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeStreamRange_tF5953324FD7FC591B632D6464C49C83C9429AAA9*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (Il2CppFullySharedGenericStruct*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___allocator3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___oldPointer0;
		int64_t L_1 = ___oldCount1;
		int64_t L_2 = ___newCount2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___allocator3;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)(L_6);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m85FEAD596A8E327F7B6820310B7FBD9822BA735C_inline (int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1;
		L_1 = math_tzcnt_m07FD7550AAB5D94312E99571B112D652E8230360_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD9A1240B1BCA4029B93CBDCE0196491FEC192E38_gshared_inline (void* ___ptr0, int32_t* ___output1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___ptr0;
		int32_t* L_1 = ___output1;
		UnsafeUtility_InternalCopyPtrToStructure_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D446ED46691A93FCA713FB662C464A32EC57539(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m07FD7550AAB5D94312E99571B112D652E8230360_inline (uint32_t ___x0, const RuntimeMethod* method) 
{
	LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint32_t L_0 = ___x0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)32);
	}

IL_0006:
	{
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		___x0 = ((int32_t)((int32_t)L_1&((int32_t)(uint32_t)((-((int64_t)(uint64_t)L_2))))));
		(&V_0)->___doubleValue_1 = (0.0);
		uint32_t L_3 = ___x0;
		(&V_0)->___longValue_0 = ((int64_t)il2cpp_codegen_add(((int64_t)4841369599423283200LL), ((int64_t)(uint64_t)L_3)));
		double* L_4 = (&(&V_0)->___doubleValue_1);
		double* L_5 = L_4;
		double L_6 = *((double*)L_5);
		*((double*)L_5) = (double)((double)il2cpp_codegen_subtract(L_6, (4503599627370496.0)));
		LongDoubleUnion_tD71C400B6C4CD1A7F13CE8125AC6BBC7A22791CA L_7 = V_0;
		int64_t L_8 = L_7.___longValue_0;
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)((int64_t)(L_8>>((int32_t)52)))), ((int32_t)1023)));
	}
}
