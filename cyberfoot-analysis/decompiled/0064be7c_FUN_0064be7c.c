// Address: 0064be7c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064be7c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *puStack_20;
  int iStack_10;
  undefined1 auStack_c [4];
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  iStack_10 = 4;
  do {
    local_8 = 0;
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  local_24 = &LAB_0064c248;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 1) {
    puVar1 = &stack0xfffffffc;
    switch(*(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc)) {
    case 1:
      puStack_20 = &stack0xfffffffc;
      FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 4 + param_1 * 0xc),&local_8);
      puVar1 = puStack_20;
      break;
    case 2:
      puStack_20 = &stack0xfffffffc;
      FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 4 + param_1 * 0xc),auStack_c);
      FUN_00642c50(0x24,&iStack_10);
      FUN_00405330(&local_8,3);
      puVar1 = puStack_20;
      break;
    case 3:
      puStack_20 = &stack0xfffffffc;
      FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 4 + param_1 * 0xc),&stack0xffffffec);
      FUN_00642c50(0x25,&stack0xffffffe8);
      FUN_00405330(&local_8,3);
      puVar1 = puStack_20;
      break;
    case 4:
      puStack_20 = &stack0xfffffffc;
      FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 4 + param_1 * 0xc),&stack0xffffffe4);
      FUN_00642c50(0x26,&puStack_20);
      FUN_00405330(&local_8,3);
      puVar1 = puStack_20;
      break;
    case 5:
      puStack_20 = &stack0xfffffffc;
      FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 4 + param_1 * 0xc),&local_24);
      FUN_004052cc(&local_8,local_24,&DAT_0064c268);
      puVar1 = puStack_20;
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 2) {
    puStack_20 = &stack0xfffffffc;
    FUN_006458c8(*(undefined4 *)(*(int *)PTR_DAT_0066b6ac + 4 + param_1 * 0xc),&local_8);
    puVar1 = puStack_20;
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 3) {
    puStack_20 = &stack0xfffffffc;
    FUN_00404bf0(&local_28,"Camp. ",
                 *(undefined4 *)
                  (PTR_PTR_0066b288 + *(int *)(*(int *)PTR_DAT_0066b6ac + 4 + param_1 * 0xc) * 4));
    FUN_004051d4(&local_8,local_28);
    puVar1 = puStack_20;
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 4) {
    if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 1) {
      puStack_20 = &stack0xfffffffc;
      FUN_00642c50(0xde,&local_8);
      puVar1 = puStack_20;
    }
    else if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 0) {
      puStack_20 = &stack0xfffffffc;
      FUN_00642c50(0xdc,&local_8);
      puVar1 = puStack_20;
    }
    else if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 2) {
      puStack_20 = &stack0xfffffffc;
      FUN_00642c50(0x3e2,&local_8);
      puVar1 = puStack_20;
    }
    else {
      puVar1 = &stack0xfffffffc;
      if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 3) {
        puStack_20 = &stack0xfffffffc;
        FUN_00642c50(0x3e3,&local_8);
        puVar1 = puStack_20;
      }
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 5) {
    puStack_20 = &stack0xfffffffc;
    FUN_00642c50(0xe0,&local_8);
    puVar1 = puStack_20;
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 6) {
    if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 1) {
      puStack_20 = &stack0xfffffffc;
      FUN_00642c50(0xdf,&local_8);
      puVar1 = puStack_20;
    }
    else {
      puVar1 = &stack0xfffffffc;
      if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 0) {
        puStack_20 = &stack0xfffffffc;
        FUN_00642c50(0xdd,&local_8);
        puVar1 = puStack_20;
      }
    }
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 7) {
    puStack_20 = &stack0xfffffffc;
    FUN_00642c50(0x146,&local_8);
    puVar1 = puStack_20;
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 8) {
    puStack_20 = &stack0xfffffffc;
    FUN_00642c50(0x147,&local_8);
    puVar1 = puStack_20;
  }
  else if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 9) {
    puStack_20 = &stack0xfffffffc;
    FUN_00642c50(0x148,&local_8);
    puVar1 = puStack_20;
  }
  else {
    puVar1 = &stack0xfffffffc;
    if (*(int *)(*(int *)PTR_DAT_0066b6ac + param_1 * 0xc) == 10) {
      if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 1) {
        puStack_20 = &stack0xfffffffc;
        FUN_00642c50(0x3e5,&local_8);
        puVar1 = puStack_20;
      }
      else {
        puVar1 = &stack0xfffffffc;
        if (*(int *)(*(int *)PTR_DAT_0066b6ac + 8 + param_1 * 0xc) == 0) {
          FUN_00642c50(0x3e4,&local_8);
          puVar1 = puStack_20;
        }
      }
    }
  }
  puStack_20 = puVar1;
  FUN_0040502c(param_2,local_8);
  puVar1 = puStack_20;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_0064c24f;
  local_24 = (undefined1 *)0x64c23a;
  FUN_004048d4(&local_28,local_28,puVar1);
  local_24 = (undefined1 *)0x64c247;
  FUN_00405008(&local_24,8);
  return;
}

