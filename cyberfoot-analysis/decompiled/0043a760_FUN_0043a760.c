// Address: 0043a760
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043a760(int param_1,LPRECT param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_0042dc7c(*(undefined4 *)(param_1 + 0x168));
  iVar2 = FUN_0042dc94(*(undefined4 *)(param_1 + 0x168));
  iVar3 = FUN_00465c0c(param_1);
  iVar4 = FUN_00465c50(param_1);
  if ((((*(char *)(param_1 + 0x178) != '\0') ||
       ((iVar6 = iVar1, iVar5 = iVar2, *(char *)(param_1 + 0x17d) != '\0' &&
        ((iVar3 < iVar1 || (iVar4 < iVar2)))))) &&
      (iVar6 = iVar3, iVar5 = iVar4, *(char *)(param_1 + 0x17d) != '\0')) &&
     ((0 < iVar1 && (0 < iVar2)))) {
    if (iVar2 < iVar1) {
      iVar5 = FUN_00402c44();
      if (iVar4 < iVar5) {
        iVar6 = FUN_00402c44();
        iVar5 = iVar4;
      }
    }
    else {
      iVar6 = FUN_00402c44();
      if (iVar3 < iVar6) {
        iVar5 = FUN_00402c44();
        iVar6 = iVar3;
      }
    }
  }
  param_2->left = 0;
  param_2->top = 0;
  param_2->right = iVar6;
  param_2->bottom = iVar5;
  if (*(char *)(param_1 + 0x179) != '\0') {
    iVar1 = iVar4 - iVar5 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((iVar4 - iVar5 & 1U) != 0);
    }
    iVar2 = iVar3 - iVar6 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar3 - iVar6 & 1U) != 0);
    }
    OffsetRect(param_2,iVar2,iVar1);
  }
  return;
}

