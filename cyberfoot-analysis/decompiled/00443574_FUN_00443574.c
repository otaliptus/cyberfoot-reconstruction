// Address: 00443574
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00443574(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    iVar5 = *(int *)(*(int *)(param_1 + 0x50) + 8);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x50),iVar4);
        cVar1 = FUN_00403c10(uVar2,PTR_PTR_00442dd8);
        if (cVar1 != '\0') {
          piVar3 = (int *)FUN_0041e01c(*(undefined4 *)(param_1 + 0x50),iVar4);
          (**(code **)(*piVar3 + 0x8c))(piVar3,param_2);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 200) = param_2;
  }
  return;
}

