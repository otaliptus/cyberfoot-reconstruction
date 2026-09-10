// Address: 005fd558
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void TForm54_FormCreate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar6;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [3];
  
  puStack_44 = &stack0xfffffffc;
  local_18 = 0;
  local_34 = 0;
  local_14 = 0;
  local_10[0] = 0;
  local_10[2] = 0;
  local_10[1] = 0;
  puStack_48 = &LAB_005fd862;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  pwVar6 = L"<p align=\"center\"><shad>";
  FUN_00642c50(0x1ca,local_10 + 1);
  FUN_00405330(local_10 + 2,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x30c),local_10[2]);
  if (*PTR_DAT_0066af9c == '\0') {
    FUN_0055d080("penalty");
  }
  if (*PTR_DAT_0066af9c == '\0') {
    FUN_0043b234(*(undefined4 *)(*(int *)PTR_DAT_0066b6a4 + 0x300),0);
  }
  DAT_006d4104 = 0;
  DAT_006d4108 = 0;
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066ae04 * 0x2f8);
  FUN_00645508(*(undefined4 *)PTR_DAT_0066ae04,local_10);
  if (local_10[0] != 0) {
    FUN_00645508(*(undefined4 *)PTR_DAT_0066ae04,&local_14);
    FUN_0042d6c0(*(undefined4 *)(*(int *)(param_1 + 0x308) + 0x168),local_14);
  }
  iVar5 = *(int *)(*(int *)PTR_DAT_0066af70 + 0xa8 + *(int *)PTR_DAT_0066ae04 * 0x2f8);
  if ((iVar5 < 1) ||
     (puVar4 = *(undefined **)PTR_DAT_0066b5b8, puVar4[iVar5 * 0x130 + 0x86] == '\0')) {
    iVar2 = 10;
    do {
      iVar5 = *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar2 * 4);
      puVar4 = PTR_DAT_0066b238;
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar5 * 0x130) != '\0') break;
      iVar2 = iVar2 + -1;
      puVar4 = (undefined *)(iVar5 * 0x26);
      iVar5 = DAT_006d4104;
    } while (iVar2 != 0);
  }
  DAT_006d4104 = iVar5;
  FUN_004030d4(local_30,*(int *)PTR_DAT_0066b5b8 + DAT_006d4104 * 0x130,puVar4);
  FUN_004030a4(local_30,&LAB_005fd8d4,0x15);
  FUN_00405194(&local_18,local_30);
  FUN_00642c50(0x1cd,&local_34);
  FUN_0040526c(&local_18,local_34);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2f8),local_18);
  iVar5 = *(int *)PTR_DAT_0066b238;
  DAT_006d4108 = *(int *)(iVar5 + 0x28 +
                         *(int *)(*(int *)PTR_DAT_0066af70 + 0x60 + *(int *)PTR_DAT_0066adc8 * 0x2f8
                                 ) * 0xf8);
  if (DAT_006d4108 < 1) {
    iVar2 = 1;
    do {
      iVar3 = *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar2 * 4);
      iVar5 = iVar3 * 0x26;
      if ((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x24 + iVar3 * 0x130) == 0) &&
         (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar3 * 0x130) != '\0')) {
        iVar5 = *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar2 * 4);
        DAT_006d4108 = iVar5;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xc);
  }
  iVar2 = DAT_006d4108;
  if (DAT_006d4108 < 1) {
    iVar3 = 1;
    do {
      iVar5 = *(int *)(*(int *)PTR_DAT_0066b238 + iVar1 * 0xf8 + -4 + iVar3 * 4);
      iVar2 = iVar5;
      if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x86 + iVar5 * 0x130) != '\0') break;
      iVar3 = iVar3 + 1;
      iVar2 = DAT_006d4108;
    } while (iVar3 != 0xc);
  }
  DAT_006d4108 = iVar2;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x2fc),CONCAT31((int3)((uint)iVar5 >> 8),1));
  *in_FS_OFFSET = L"</shad></p>";
  FUN_00404ff0(&local_34,L"</shad></p>",pwVar6,&LAB_005fd869);
  FUN_00404ff0(&local_18);
  FUN_004048f8(&local_14,2);
  FUN_00405008(local_10 + 1,2);
  return;
}

