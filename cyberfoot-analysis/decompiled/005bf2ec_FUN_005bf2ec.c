// Address: 005bf2ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005bf2ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined2 local_14 [4];
  BSTR local_c;
  
  local_14[0] = 8;
  local_c = (BSTR)FUN_00405bf0(param_3);
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_005bf234(param_1,param_2,local_14);
  *in_FS_OFFSET = uStackY_2c;
  uStackY_2c = 0x5bf33b;
  SysFreeString(local_c);
  return;
}

