// Address: 004761e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004761e0(undefined2 param_1,undefined4 param_2)

{
  UINT UVar1;
  CHAR local_106 [256];
  undefined2 local_6;
  
  local_6 = param_1;
  FUN_004048d4(param_2);
  UVar1 = MapVirtualKeyA((uint)(byte)local_6,0);
  if (UVar1 << 0x10 != 0) {
    GetKeyNameTextA(UVar1 << 0x10,local_106,0x100);
    FUN_00404b54(param_2,local_106,0x100);
  }
  return;
}

