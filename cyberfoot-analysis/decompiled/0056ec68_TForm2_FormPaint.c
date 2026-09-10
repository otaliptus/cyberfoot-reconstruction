// Address: 0056ec68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm2_FormPaint(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_0066b6ec;
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x4c); iVar5 = iVar5 + iVar4) {
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x48); iVar4 = iVar4 + iVar3) {
      uVar6 = *(undefined4 *)puVar1;
      uVar2 = FUN_00481490(param_1);
      FUN_0042ae64(uVar2,iVar4,iVar5,uVar6);
      iVar3 = (**(code **)(**(int **)puVar1 + 0x2c))();
    }
    iVar4 = (**(code **)(**(int **)puVar1 + 0x20))();
  }
  return;
}

