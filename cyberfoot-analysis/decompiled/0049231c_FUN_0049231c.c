// Address: 0049231c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0049231c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x7fc);
  iVar5 = 0;
  piVar4 = (int *)(iVar2 + 0x3fc);
  uVar3 = 0;
  *(int **)(iVar1 + 0x28) = piVar4;
  piVar6 = piVar4;
  do {
    *piVar6 = iVar5;
    piVar4[-uVar3] = -iVar5;
    piVar6 = piVar6 + 1;
    uVar3 = uVar3 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)uVar3 < 0x10);
  piVar6 = piVar4 + uVar3;
  while ((int)uVar3 < 0x30) {
    *piVar6 = iVar5;
    piVar6 = piVar6 + 1;
    piVar4[-uVar3] = -iVar5;
    iVar5 = iVar5 + (uint)((uVar3 + 1 & 1) == 0);
    uVar3 = uVar3 + 1;
  }
  piVar6 = piVar4 + uVar3;
  for (; (int)uVar3 < 0x100; uVar3 = uVar3 + 1) {
    *piVar6 = iVar5;
    piVar6 = piVar6 + 1;
    piVar4[-uVar3] = -iVar5;
  }
  return;
}

