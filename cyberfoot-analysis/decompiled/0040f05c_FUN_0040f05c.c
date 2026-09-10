// Address: 0040f05c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040f05c(int param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (DAT_0066c750 == '\0') {
    iVar4 = FUN_00409724(param_1,param_2);
  }
  else {
    iVar3 = FUN_00404ba4(param_1);
    iVar4 = FUN_00404f30(param_2,iVar3);
    iVar6 = 1;
    if (0 < iVar3) {
      do {
        iVar4 = thunk_FUN_00404db0(param_2);
        *(undefined1 *)(iVar4 + -1 + iVar6) = *(undefined1 *)(param_1 + -1 + iVar6);
        uVar5 = (uint)*(byte *)(param_1 + -1 + iVar6);
        if ((*(byte *)((int)&DAT_00662134 + ((int)uVar5 >> 3)) >> (uVar5 & 7) & 1) == 0) {
          cVar2 = *(char *)(*param_2 + -1 + iVar6);
          iVar4 = CONCAT31((int3)((uint)*param_2 >> 8),cVar2 + -0x5b);
          if ((byte)(cVar2 + 0xbfU) < 0x1a) {
            iVar4 = thunk_FUN_00404db0(param_2);
            pcVar1 = (char *)(iVar4 + -1 + iVar6);
            *pcVar1 = *pcVar1 + ' ';
          }
        }
        else {
          iVar6 = iVar6 + 1;
          iVar4 = thunk_FUN_00404db0(param_2);
          *(undefined1 *)(iVar4 + -1 + iVar6) = *(undefined1 *)(param_1 + -1 + iVar6);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iVar3);
    }
  }
  return iVar4;
}

