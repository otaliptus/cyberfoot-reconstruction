// Address: 005fb5d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm38_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  char cVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int *piVar7;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar4 = 6;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005fb8c1;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x5fb604;
  FUN_00642c50(0x1df,&local_1c);
  local_28 = 0x5fb615;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x31c),local_1c);
  DAT_006d40e8 = 0;
  local_28 = 0x5fb62a;
  iVar2 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b3b8);
  iVar4 = DAT_006d40e8;
  if (0 < iVar2) {
    iVar5 = 1;
    do {
      iVar4 = iVar5;
      if ((*(int *)(*(int *)PTR_DAT_0066b3b8 + 8 + iVar5 * 0x1bc) == *(int *)PTR_DAT_0066adb0) ||
         (*(int *)(*(int *)PTR_DAT_0066b3b8 + 0xc + iVar5 * 0x1bc) == *(int *)PTR_DAT_0066adb0))
      break;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
      iVar4 = DAT_006d40e8;
    } while (iVar2 != 0);
  }
  DAT_006d40e8 = iVar4;
  cVar6 = *(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066adb0 * 0x2f8) == '\0';
  if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *(int *)PTR_DAT_0066ae1c * 0x2f8) == '\0') {
    cVar6 = cVar6 + '\x01';
  }
  if (cVar6 != '\0') {
    iVar4 = 1;
    piVar7 = (int *)&stack0xffffffec;
    do {
      if (*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + *piVar7 * 0x2f8) == '\0') {
        iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *piVar7 * 0x2f8);
        local_c = 0;
        iVar5 = 0x19;
        do {
          iVar3 = 1;
          do {
            if ((iVar5 == *(int *)(*(int *)PTR_DAT_0066b238 + iVar2 * 0xf8 + 0x58 + iVar3 * 4)) &&
               (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 +
                         *(int *)(*(int *)PTR_DAT_0066b238 + iVar2 * 0xf8 + -4 + iVar3 * 4) * 0x130)
                != '\0')) {
              local_c = local_c + 1;
              if (iVar4 == 1) {
                (&DAT_006d408c)[local_c] =
                     *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar2 * 0xf8 + -4 + iVar3 * 4);
              }
              else {
                *(undefined4 *)(&DAT_006d40b8 + local_c * 4) =
                     *(undefined4 *)(*(int *)PTR_DAT_0066b238 + iVar2 * 0xf8 + -4 + iVar3 * 4);
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0xc);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar4 != 3);
  }
  DAT_006d4088 = *(int *)PTR_DAT_0066adb0;
  DAT_006d408c = *(int *)PTR_DAT_0066ae1c;
  local_28 = 0x5fb7ca;
  FUN_00645508(DAT_006d4088,&local_20);
  if (local_20 != (undefined1 *)0x0) {
    local_28 = 0x5fb7dd;
    FUN_00645508(DAT_006d4088,&local_24);
    local_28 = 0x5fb7f4;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 800) + 0x168),local_24);
  }
  local_28 = 0x5fb801;
  FUN_00645508(DAT_006d408c,&local_28);
  if (local_28 != 0) {
    local_28 = 0x5fb814;
    FUN_00645508(DAT_006d408c,&local_2c);
    local_28 = 0x5fb82b;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x324) + 0x168),local_2c);
  }
  local_28 = 0x5fb845;
  FUN_00405194(&local_30,*(int *)PTR_DAT_0066af70 + DAT_006d4088 * 0x2f8);
  local_28 = 0x5fb856;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_30);
  local_28 = 0x5fb870;
  FUN_00405194(&local_34,*(int *)PTR_DAT_0066af70 + DAT_006d408c * 0x2f8);
  local_28 = 0x5fb881;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x300),local_34);
  local_28 = 0x5fb891;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x338),1);
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005fb8c8;
  local_20 = (undefined1 *)0x5fb8ab;
  FUN_00405008(&local_34,2,puVar1);
  local_20 = (undefined1 *)0x5fb8b8;
  FUN_004048f8(&local_2c,4);
  local_20 = (undefined1 *)0x5fb8c0;
  FUN_00404ff0(&local_1c);
  return;
}

