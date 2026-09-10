// Address: 004499b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004499b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_004498e4(param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_00449aa0(uVar3);
    uVar2 = FUN_00433028(uVar2,*(undefined4 *)(param_1 + 0x10));
    uVar3 = FUN_00449aac(uVar3,uVar2);
  }
  return uVar3;
}

