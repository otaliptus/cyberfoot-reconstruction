// Address: 00485e74
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00485e74(int param_1,char param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  HICON pHVar3;
  int iVar4;
  undefined1 *puVar5;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  CHAR local_105;
  CHAR aCStack_104 [255];
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    local_5 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  puVar1 = PTR_DAT_0066b220;
  if (*(short *)(PTR_DAT_0066b220 + 2) == 0) {
    *(int *)(PTR_DAT_0066b220 + 4) = param_1;
    *(undefined1 **)puVar1 = &LAB_004875f4;
  }
  puVar1 = PTR_DAT_0066b410;
  if (*(short *)(PTR_DAT_0066b410 + 2) == 0) {
    *(int *)(PTR_DAT_0066b410 + 4) = param_1;
    *(code **)puVar1 = FUN_004877ec;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  uVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = FUN_00403a54(PTR_PTR_0041b73c,1);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xff000018;
  *(undefined4 *)(param_1 + 0x78) = 500;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x9c4;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 1;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  uVar2 = FUN_004318d0(PTR_LAB_004294bc,1);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  pHVar3 = LoadIconA(*(HINSTANCE *)PTR_DAT_0066afc4,"MAINICON");
  FUN_00431ca0(uVar2,pHVar3);
  iVar4 = *(int *)(param_1 + 0x98);
  *(int *)(iVar4 + 0x14) = param_1;
  *(undefined1 **)(iVar4 + 0x10) = &LAB_00487d9c;
  GetModuleFileNameA(*(HMODULE *)PTR_DAT_0066afc4,&local_105,0x100);
  OemToCharA(&local_105,&local_105);
  iVar4 = FUN_0040f188(&local_105,0x5c);
  if (iVar4 != 0) {
    FUN_0040a79c(&local_105,iVar4 + 1);
  }
  puVar5 = (undefined1 *)FUN_0040f1b0(&local_105,0x2e);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0;
  }
  CharLowerA(aCStack_104);
  FUN_00404b54(param_1 + 0x8c,&local_105,0x100);
  if (*PTR_DAT_0066ac88 == '\0') {
    FUN_0048617c(param_1);
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  *(undefined1 *)(param_1 + 0x9e) = 1;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_00487f78(param_1);
  FUN_00488960(param_1);
  if (local_5 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_120;
  }
  return param_1;
}

