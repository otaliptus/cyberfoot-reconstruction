// Address: 0061eb40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061eb40(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_0061edbe;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_1;
  FUN_0043b234(DAT_006d4918,0);
  DAT_006d47a8 = 0xffffffff;
  iVar3 = *(int *)(*(int *)PTR_DAT_0066afa0 + param_2 * 0x48);
  iVar1 = *(int *)(*(int *)PTR_DAT_0066afa0 + 4 + param_2 * 0x48);
  _DAT_006d47ac = param_2;
  if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar3 * 0x2f8) == '\0') &&
     (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + iVar1 * 0x2f8) == '\0')) {
    if ((PTR_DAT_0066ac78[0xda] == '\0') || (*PTR_DAT_0066b6c8 != '\0')) {
      local_10 = FUN_004032c8(7);
      local_10 = local_10 + 2;
      local_c = FUN_004032c8(7);
      local_c = local_c + 2;
      iVar3 = FUN_006233cc(local_8,iVar3,iVar1);
      *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + iVar3 * 0x1bc) = 1;
      if (local_10 < local_c) {
        DAT_006d47a8 = 2;
        *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + iVar3 * 0x1bc) = 1;
        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar3 * 0x1bc) = local_c + -1;
        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar3 * 0x1bc) = local_c;
      }
      else {
        DAT_006d47a8 = 1;
        *(undefined1 *)(*(int *)PTR_DAT_0066b3b8 + 0x170 + iVar3 * 0x1bc) = 1;
        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar3 * 0x1bc) = local_10;
        *(int *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar3 * 0x1bc) = local_10 + -1;
      }
      *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x10 + param_2 * 0x48) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x174 + iVar3 * 0x1bc);
      *(undefined4 *)(*(int *)PTR_DAT_0066afa0 + 0x14 + param_2 * 0x48) =
           *(undefined4 *)(*(int *)PTR_DAT_0066b3b8 + 0x178 + iVar3 * 0x1bc);
    }
    else {
      *(int *)PTR_DAT_0066ad84 = param_2;
      *(int *)PTR_DAT_0066b648 = param_2;
      *(int *)PTR_DAT_0066adb0 = iVar3;
      *(int *)PTR_DAT_0066ae1c = iVar1;
      FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fb2c4,PTR_DAT_0066b470);
      (**(code **)(**(int **)PTR_DAT_0066b470 + 0xec))();
    }
  }
  else {
    *(int *)PTR_DAT_0066b648 = param_2;
    *(undefined4 *)PTR_DAT_0066b134 = 1;
    *(int *)PTR_DAT_0066adb0 = iVar3;
    *(int *)PTR_DAT_0066ae1c = iVar1;
    FUN_00487474(*(undefined4 *)PTR_DAT_0066b3ac,PTR_PTR_005fc348,PTR_DAT_0066b3f4);
    (**(code **)(**(int **)PTR_DAT_0066b3f4 + 0xec))();
  }
  if (*PTR_DAT_0066b6c8 == '\0') {
    FUN_00642c50(0x1df,&local_14);
    FUN_004e1414(*(undefined4 *)(local_8 + 0x2fc),local_14);
    FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
    Sleep(0x1e);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0061edc5;
  puStack_28 = (undefined1 *)0x61edbd;
  FUN_00404ff0(&local_14,uStack_2c,puVar2);
  return;
}

