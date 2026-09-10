// Address: 00403f00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 * FUN_00403f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 *puStack_4;
  
  if (1 < DAT_0066202c) {
    uStack_10 = 0x403f11;
    uStack_c = param_3;
    uStack_8 = param_2;
    puStack_4 = (undefined1 *)param_1;
    FUN_00403ee0();
    param_1 = &uStack_10;
    (*DAT_0066c014)();
  }
  return param_1;
}

