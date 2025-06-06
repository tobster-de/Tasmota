/* Solidification of Matter_Plugin_3_Sensor_OnOff.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Plugin_Sensor_OnOff;

/********************************************************************
** Solidified function: <lambda>
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_OnOff__X3Clambda_X3E,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    0,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(_X3Clambda_X3E),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x60040009,  //  0000  GETGBL	R1	G9
      0x5C080000,  //  0001  MOVE	R2	R0
      0x7C040200,  //  0002  CALL	R1	1
      0x80040200,  //  0003  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_configuration
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_OnOff_parse_configuration,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota_switch_index),
    /* K1   */  be_nested_str_weak(find),
    /* K2   */  be_nested_str_weak(ARG),
    /* K3   */  be_const_int(1),
    /* K4   */  be_const_int(0),
    }),
    be_str_weak(parse_configuration),
    &be_const_str_solidified,
    ( &(const binstruction[12]) {  /* code */
      0x60080009,  //  0000  GETGBL	R2	G9
      0x8C0C0301,  //  0001  GETMET	R3	R1	K1
      0x88140102,  //  0002  GETMBR	R5	R0	K2
      0x58180003,  //  0003  LDCONST	R6	K3
      0x7C0C0600,  //  0004  CALL	R3	3
      0x7C080200,  //  0005  CALL	R2	1
      0x90020002,  //  0006  SETMBR	R0	K0	R2
      0x88080100,  //  0007  GETMBR	R2	R0	K0
      0x18080504,  //  0008  LE	R2	R2	K4
      0x780A0000,  //  0009  JMPF	R2	#000B
      0x90020103,  //  000A  SETMBR	R0	K0	K3
      0x80000000,  //  000B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: read_attribute
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_OnOff_read_attribute,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[11]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(TLV),
    /* K2   */  be_nested_str_weak(cluster),
    /* K3   */  be_nested_str_weak(attribute),
    /* K4   */  be_nested_str_weak(update_shadow_lazy),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(set),
    /* K7   */  be_nested_str_weak(BOOL),
    /* K8   */  be_nested_str_weak(shadow_onoff),
    /* K9   */  be_nested_str_weak(U4),
    /* K10  */  be_nested_str_weak(read_attribute),
    }),
    be_str_weak(read_attribute),
    &be_const_str_solidified,
    ( &(const binstruction[45]) {  /* code */
      0xB8120000,  //  0000  GETNGBL	R4	K0
      0x88100901,  //  0001  GETMBR	R4	R4	K1
      0x88140502,  //  0002  GETMBR	R5	R2	K2
      0x88180503,  //  0003  GETMBR	R6	R2	K3
      0x541E0005,  //  0004  LDINT	R7	6
      0x1C1C0A07,  //  0005  EQ	R7	R5	R7
      0x781E001B,  //  0006  JMPF	R7	#0023
      0x8C1C0104,  //  0007  GETMET	R7	R0	K4
      0x7C1C0200,  //  0008  CALL	R7	1
      0x1C1C0D05,  //  0009  EQ	R7	R6	K5
      0x781E0005,  //  000A  JMPF	R7	#0011
      0x8C1C0706,  //  000B  GETMET	R7	R3	K6
      0x88240907,  //  000C  GETMBR	R9	R4	K7
      0x88280108,  //  000D  GETMBR	R10	R0	K8
      0x7C1C0600,  //  000E  CALL	R7	3
      0x80040E00,  //  000F  RET	1	R7
      0x70020010,  //  0010  JMP		#0022
      0x541EFFFB,  //  0011  LDINT	R7	65532
      0x1C1C0C07,  //  0012  EQ	R7	R6	R7
      0x781E0005,  //  0013  JMPF	R7	#001A
      0x8C1C0706,  //  0014  GETMET	R7	R3	K6
      0x88240909,  //  0015  GETMBR	R9	R4	K9
      0x58280005,  //  0016  LDCONST	R10	K5
      0x7C1C0600,  //  0017  CALL	R7	3
      0x80040E00,  //  0018  RET	1	R7
      0x70020007,  //  0019  JMP		#0022
      0x541EFFFC,  //  001A  LDINT	R7	65533
      0x1C1C0C07,  //  001B  EQ	R7	R6	R7
      0x781E0004,  //  001C  JMPF	R7	#0022
      0x8C1C0706,  //  001D  GETMET	R7	R3	K6
      0x88240909,  //  001E  GETMBR	R9	R4	K9
      0x542A0003,  //  001F  LDINT	R10	4
      0x7C1C0600,  //  0020  CALL	R7	3
      0x80040E00,  //  0021  RET	1	R7
      0x70020008,  //  0022  JMP		#002C
      0x601C0003,  //  0023  GETGBL	R7	G3
      0x5C200000,  //  0024  MOVE	R8	R0
      0x7C1C0200,  //  0025  CALL	R7	1
      0x8C1C0F0A,  //  0026  GETMET	R7	R7	K10
      0x5C240200,  //  0027  MOVE	R9	R1
      0x5C280400,  //  0028  MOVE	R10	R2
      0x5C2C0600,  //  0029  MOVE	R11	R3
      0x7C1C0800,  //  002A  CALL	R7	4
      0x80040E00,  //  002B  RET	1	R7
      0x80000000,  //  002C  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: update_shadow
********************************************************************/
be_local_closure(Matter_Plugin_Sensor_OnOff_update_shadow,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(update_shadow),
    /* K1   */  be_nested_str_weak(Switch),
    /* K2   */  be_nested_str_weak(tasmota_switch_index),
    /* K3   */  be_nested_str_weak(tasmota),
    /* K4   */  be_nested_str_weak(cmd),
    /* K5   */  be_nested_str_weak(Status_X208),
    /* K6   */  be_nested_str_weak(find),
    /* K7   */  be_nested_str_weak(StatusSNS),
    /* K8   */  be_nested_str_weak(contains),
    /* K9   */  be_nested_str_weak(ON),
    /* K10  */  be_nested_str_weak(shadow_onoff),
    /* K11  */  be_nested_str_weak(attribute_updated),
    /* K12  */  be_const_int(0),
    }),
    be_str_weak(update_shadow),
    &be_const_str_solidified,
    ( &(const binstruction[41]) {  /* code */
      0x60040003,  //  0000  GETGBL	R1	G3
      0x5C080000,  //  0001  MOVE	R2	R0
      0x7C040200,  //  0002  CALL	R1	1
      0x8C040300,  //  0003  GETMET	R1	R1	K0
      0x7C040200,  //  0004  CALL	R1	1
      0x60040008,  //  0005  GETGBL	R1	G8
      0x88080102,  //  0006  GETMBR	R2	R0	K2
      0x7C040200,  //  0007  CALL	R1	1
      0x00060201,  //  0008  ADD	R1	K1	R1
      0xB80A0600,  //  0009  GETNGBL	R2	K3
      0x8C080504,  //  000A  GETMET	R2	R2	K4
      0x58100005,  //  000B  LDCONST	R4	K5
      0x50140200,  //  000C  LDBOOL	R5	1	0
      0x7C080600,  //  000D  CALL	R2	3
      0x4C0C0000,  //  000E  LDNIL	R3
      0x200C0403,  //  000F  NE	R3	R2	R3
      0x780E0003,  //  0010  JMPF	R3	#0015
      0x8C0C0506,  //  0011  GETMET	R3	R2	K6
      0x58140007,  //  0012  LDCONST	R5	K7
      0x7C0C0400,  //  0013  CALL	R3	2
      0x5C080600,  //  0014  MOVE	R2	R3
      0x4C0C0000,  //  0015  LDNIL	R3
      0x200C0403,  //  0016  NE	R3	R2	R3
      0x780E000F,  //  0017  JMPF	R3	#0028
      0x8C0C0508,  //  0018  GETMET	R3	R2	K8
      0x5C140200,  //  0019  MOVE	R5	R1
      0x7C0C0400,  //  001A  CALL	R3	2
      0x780E000B,  //  001B  JMPF	R3	#0028
      0x8C0C0506,  //  001C  GETMET	R3	R2	K6
      0x5C140200,  //  001D  MOVE	R5	R1
      0x7C0C0400,  //  001E  CALL	R3	2
      0x1C0C0709,  //  001F  EQ	R3	R3	K9
      0x8810010A,  //  0020  GETMBR	R4	R0	K10
      0x20100803,  //  0021  NE	R4	R4	R3
      0x78120003,  //  0022  JMPF	R4	#0027
      0x8C10010B,  //  0023  GETMET	R4	R0	K11
      0x541A0005,  //  0024  LDINT	R6	6
      0x581C000C,  //  0025  LDCONST	R7	K12
      0x7C100600,  //  0026  CALL	R4	3
      0x90021403,  //  0027  SETMBR	R0	K10	R3
      0x80000000,  //  0028  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Plugin_Sensor_OnOff
********************************************************************/
extern const bclass be_class_Matter_Plugin_Device;
be_local_class(Matter_Plugin_Sensor_OnOff,
    2,
    &be_class_Matter_Plugin_Device,
    be_nested_map(13,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ARG, 8), be_nested_str_weak(switch) },
        { be_const_key_weak(ARG_HINT, -1), be_nested_str_weak(Switch_X3Cx_X3E_X20number) },
        { be_const_key_weak(TYPE, -1), be_nested_str_weak(onoff) },
        { be_const_key_weak(ARG_TYPE, 1), be_const_static_closure(Matter_Plugin_Sensor_OnOff__X3Clambda_X3E_closure) },
        { be_const_key_weak(UPDATE_TIME, -1), be_const_int(750) },
        { be_const_key_weak(update_shadow, -1), be_const_closure(Matter_Plugin_Sensor_OnOff_update_shadow_closure) },
        { be_const_key_weak(NAME, -1), be_nested_str_weak(OnOff_X20Sensor) },
        { be_const_key_weak(parse_configuration, 5), be_const_closure(Matter_Plugin_Sensor_OnOff_parse_configuration_closure) },
        { be_const_key_weak(shadow_onoff, -1), be_const_var(1) },
        { be_const_key_weak(tasmota_switch_index, 6), be_const_var(0) },
        { be_const_key_weak(CLUSTERS, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(6,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(6, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(5, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(8,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(4),
        be_const_int(5),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(57, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(7,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(17),
        be_const_int(3),
        be_const_int(5),
        be_const_int(10),
        be_const_int(15),
        be_const_int(17),
        be_const_int(18),
    }))    ) } )) },
        { be_const_key_int(3, 2), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(4,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(4, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(3,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
        { be_const_key_int(29, 1), be_const_simple_instance(be_nested_simple_instance(&be_class_list, {
        be_const_list( *     be_nested_list(6,
    ( (struct bvalue*) &(const bvalue[]) {
        be_const_int(0),
        be_const_int(1),
        be_const_int(2),
        be_const_int(3),
        be_const_int(65532),
        be_const_int(65533),
    }))    ) } )) },
    }))    ) } )) },
        { be_const_key_weak(read_attribute, 4), be_const_closure(Matter_Plugin_Sensor_OnOff_read_attribute_closure) },
        { be_const_key_weak(TYPES, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(1,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(2128, -1), be_const_int(2) },
    }))    ) } )) },
    })),
    be_str_weak(Matter_Plugin_Sensor_OnOff)
);
/*******************************************************************/

void be_load_Matter_Plugin_Sensor_OnOff_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Plugin_Sensor_OnOff);
    be_setglobal(vm, "Matter_Plugin_Sensor_OnOff");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
