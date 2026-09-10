// Address: 005d25a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005d25a4(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  int iStack_8;
  
  local_20 = &stack0xfffffffc;
  local_10 = 4;
  do {
    iStack_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_005d27f4;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  FUN_004060a8(&DAT_006d3250,PTR_DAT_005d247c,1,0);
  (**(code **)(**(int **)(DAT_006d324c + 0x2f8) + 0xd8))();
  local_c = *(int *)(PTR_DAT_0066b574 + 0x2240);
  iStack_8 = *(int *)(PTR_DAT_0066b574 + 0x2244);
  iVar6 = 0;
  FUN_00404ff0(&DAT_006d3260);
  if (*PTR_DAT_0066b53c == '\0') {
    local_c = *(int *)(PTR_DAT_0066b574 + 0x2240);
    iStack_8 = *(int *)(PTR_DAT_0066b574 + 0x2244);
  }
  else {
    iVar5 = 0x16f;
    piVar4 = (int *)(PTR_DAT_0066b574 + -8);
    do {
      iVar1 = *piVar4;
      if ((iVar1 == 3) || (iVar1 == 1)) {
        local_c = piVar4[-2];
        iStack_8 = piVar4[-1];
        if (iVar1 == 1) {
          FUN_00642c50(0x2ae,&local_10);
          FUN_0040d11c(&stack0xffffffe8);
          FUN_004051d4(&stack0xffffffec,unaff_ESI);
          FUN_00405330(&DAT_006d3260,3);
        }
        else {
          FUN_00642c50(0x2ae,&stack0xffffffe4);
          FUN_0040d11c(&local_24);
          FUN_004051d4(&local_20,local_24);
          FUN_00405330(&DAT_006d3260,3);
        }
        break;
      }
      piVar4 = piVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = 1;
  piVar4 = (int *)(PTR_DAT_0066b574 + 0x10);
  do {
    if ((((*piVar4 == 0) &&
         (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) <
          *(double *)(piVar4 + -2))) &&
        (*(double *)(piVar4 + -2) <= (double)CONCAT44(iStack_8,local_c))) &&
       (cVar3 = FUN_005d250c(iVar5), cVar3 == '\0')) {
      iVar6 = iVar6 + 1;
      FUN_004060a8(&DAT_006d3250,PTR_DAT_005d247c,1,iVar6);
      *(int *)(DAT_006d3250 + -4 + iVar6 * 4) = iVar5;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 6;
  } while (iVar5 != 0x16f);
  if (-1 < iVar6 + -1) {
    do {
      FUN_0040d11c(&local_28);
      piVar4 = *(int **)(*(int *)(DAT_006d324c + 0x2f8) + 0x23c);
      (**(code **)(*piVar4 + 0x38))(piVar4,local_28);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005d27fb;
  local_24 = (undefined1 *)0x5d27d1;
  FUN_004048f8(&local_28,2,puVar2);
  local_24 = (undefined1 *)0x5d27de;
  FUN_00405008(&local_20,2);
  local_24 = (undefined1 *)0x5d27e6;
  FUN_004048d4(&stack0xffffffe8);
  local_24 = (undefined1 *)0x5d27f3;
  FUN_00405008(&stack0xffffffec,2);
  return;
}

