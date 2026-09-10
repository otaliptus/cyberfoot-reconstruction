// Address: 00618ac8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00618ac8(int param_1)

{
  undefined1 *puVar1;
  HANDLE hProcess;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  SIZE_T dwMinimumWorkingSetSize;
  SIZE_T dwMaximumWorkingSetSize;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_00618cf9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (4 < *(int *)PTR_DAT_0066afcc) {
    dwMaximumWorkingSetSize = 0xffffffff;
    dwMinimumWorkingSetSize = 0xffffffff;
    hProcess = GetCurrentProcess();
    SetProcessWorkingSetSize(hProcess,dwMinimumWorkingSetSize,dwMaximumWorkingSetSize);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  FUN_00618554(param_1);
  *(undefined4 *)PTR_DAT_0066ad84 = 1;
  DAT_006d4928 = 0xffffffff;
  *PTR_DAT_0066b6a0 = 1;
  FUN_0064d5d4(1,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_8);
  DAT_006d48f4 = 0;
  *(undefined4 *)PTR_DAT_0066b080 = 0;
  *(undefined4 *)PTR_DAT_0066b594 = 0;
  *(undefined4 *)PTR_DAT_0066af54 = 0;
  *(undefined4 *)PTR_DAT_0066b2cc = 1;
  DAT_006d4794 = 0;
  iVar4 = 10;
  puVar2 = &DAT_006d4494;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *PTR_DAT_0066b6c8 = 0;
  *(undefined4 *)PTR_DAT_0066adac = *(undefined4 *)(PTR_DAT_0066ac78 + 0x16c);
  FUN_004060a8(PTR_DAT_0066b3b8,PTR_DAT_00488ca0,1,0x29);
  FUN_004060a8(PTR_DAT_0066ac7c,PTR_DAT_00488da0,1,0);
  FUN_00404ff0(PTR_DAT_0066aee8);
  DAT_006d4790 = 2;
  switch(*(undefined4 *)(PTR_DAT_0066ac78 + 0x88)) {
  case 0:
    FUN_006140fc(param_1);
    break;
  case 1:
  case 2:
  case 4:
  case 6:
    FUN_006225c8(param_1);
    break;
  case 3:
    FUN_00614e38(param_1);
    break;
  case 5:
    FUN_0061737c(param_1);
    break;
  case 7:
    FUN_0061938c(param_1);
    break;
  case 8:
  case 9:
    FUN_00619e54(param_1);
    break;
  case 10:
    FUN_006148f4(param_1);
  }
  if (*PTR_DAT_0066b6c8 == '\0') {
    FUN_00610b38(param_1);
  }
  FUN_004e1400(*(undefined4 *)(param_1 + 0x324),&local_10);
  FUN_004052cc(&local_c,L"<IND x=\"12\">",local_10);
  FUN_00545088(*(undefined4 *)(param_1 + 0x310),local_c);
  iVar4 = *(int *)PTR_DAT_0066aea4;
  if (0 < iVar4) {
    do {
      iVar3 = 2;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (PTR_DAT_0066ac78[0x6c8] != '\0') {
    FUN_0043b244(DAT_006d4918,1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00618d00;
  puStack_1c = (undefined1 *)0x618ceb;
  FUN_00404ff0(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x618cf8;
  FUN_00405008(&local_c,2);
  return;
}

