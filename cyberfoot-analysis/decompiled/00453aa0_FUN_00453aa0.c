// Address: 00453aa0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453aa0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x61];
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x50))();
    uVar2 = uVar2 & 0x7f;
    uVar3 = FUN_00453dec(param_1);
    FUN_004673cc(iVar1,0x401,uVar3,uVar2);
  }
  return;
}

