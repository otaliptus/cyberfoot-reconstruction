// Address: 00507fa8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00507fa8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_2;
  iVar2 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar5);
      if (iVar5 < *(int *)(param_1 + 0x290)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
      }
      if (((*(char *)(iVar3 + 0xa9) != '\0') && (*(int *)(iVar3 + 0x74) - iVar4 <= iVar1)) &&
         (iVar1 <= (*(int *)(iVar3 + 0x74) + *(int *)(iVar3 + 0xb0)) - iVar4)) {
        return iVar3;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

