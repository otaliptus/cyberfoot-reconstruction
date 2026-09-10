// Address: 00507efc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00507efc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  local_14 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
  if (-1 < local_14 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar3);
      if (iVar3 < *(int *)(param_1 + 0x290)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
      }
      iVar2 = (*(int *)(iVar1 + 0x74) + *(int *)(iVar1 + 0xb0)) - iVar2;
      if ((((*(char *)(iVar1 + 0xa9) != '\0') && ((*(byte *)(iVar1 + 0x7d) & 1) == 0)) &&
          (iVar2 + -3 <= param_2)) && (param_2 <= iVar2 + 2)) {
        if (iVar3 < *(int *)(param_1 + 0x290)) {
          return iVar1;
        }
        iVar2 = FUN_0050f330(param_1);
        if (iVar2 <= param_2) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

