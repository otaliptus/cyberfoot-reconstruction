// Address: 004ab6b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ab6b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x134);
  FUN_004aa2cc(param_1,*(undefined4 *)(param_2 + 0x130));
  *(undefined1 *)(param_1 + 0x12d) = *(undefined1 *)(param_2 + 0x12d);
  *(undefined1 *)(param_1 + 300) = *(undefined1 *)(param_2 + 300);
  FUN_004a9fec(param_1);
  FUN_004a6364(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(*(int *)(param_2 + 0x138) + 8));
  local_c = *(int *)(*(int *)(param_1 + 0x138) + 8);
  if (-1 < local_c + -1) {
    iVar5 = 0;
    do {
      uVar3 = *(undefined4 *)(param_2 + 0x138);
      FUN_004a63ac(uVar3,iVar5);
      iVar1 = FUN_004039cc();
      uVar2 = (**(code **)(iVar1 + 8))(iVar1,1,param_1);
      FUN_004a6350(*(undefined4 *)(param_1 + 0x138),iVar5,uVar2);
      uVar3 = FUN_004a63ac(uVar3,iVar5);
      piVar4 = (int *)FUN_004a63ac(*(undefined4 *)(param_1 + 0x138),iVar5);
      (**(code **)(*piVar4 + 4))(piVar4,uVar3);
      iVar5 = iVar5 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

