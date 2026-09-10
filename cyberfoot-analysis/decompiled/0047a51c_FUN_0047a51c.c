// Address: 0047a51c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0047a51c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_204 [512];
  
  local_204[0] = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*param_1 + 0x34))();
    FUN_0047a47c();
  }
  if (param_1[0xf] != 0) {
    uVar1 = FUN_00404da4(param_1[0xf]);
    iVar2 = FUN_0040a83c(uVar1,local_204);
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_00404b54(param_1 + 0xf,local_204,0x200);
  return 1;
}

