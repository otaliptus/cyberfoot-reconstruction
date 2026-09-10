// Address: 005fe940
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm34_Timer2Timer(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_005fecca;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0043b234(*(undefined4 *)(param_1 + 0x2fc),0);
  iVar3 = 0x46;
  iVar1 = *(int *)PTR_DAT_0066b4c8;
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + iVar1 * 0x130) == 9) {
    iVar3 = 0x50;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + iVar1 * 0x130) == 9) {
    iVar3 = iVar3 + 5;
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + iVar1 * 0x130) != '\0') {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x5c + DAT_006d4114 * 0x130) == 1) {
    iVar3 = iVar3 + -0xf;
  }
  if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x60 + DAT_006d4114 * 0x130) == 1) {
    iVar3 = iVar3 + -10;
  }
  if (*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x15 + DAT_006d4114 * 0x130) != '\0') {
    iVar3 = iVar3 + -5;
  }
  iVar1 = FUN_004032c8(100);
  if (iVar3 < iVar1 + 1) {
    FUN_0055d080("goladv");
    uVar2 = FUN_004032c8(0xb);
    switch(uVar2) {
    case 0:
      FUN_00642c50(0x1d2,&local_8);
      break;
    case 1:
      FUN_00642c50(0x1d2,&local_8);
      break;
    case 2:
      FUN_00642c50(0x1d2,&local_8);
      break;
    case 3:
      FUN_00642c50(0x1d3,&local_8);
      break;
    case 4:
      FUN_00642c50(0x1d3,&local_8);
      break;
    case 5:
      FUN_00642c50(0x1d3,&local_8);
      break;
    case 6:
      FUN_00642c50(0x1d3,&local_8);
      break;
    case 7:
      FUN_00642c50(0x1d4,&local_8);
      break;
    case 8:
      FUN_00642c50(0x1d4,&local_8);
      break;
    case 9:
      FUN_00642c50(0x1d4,&local_8);
      break;
    case 10:
      FUN_00642c50(0x1d4,&local_8);
    }
    pwVar4 = L"<SHAD><B><FONT color=\"#FFFFFF\"><P align=\"center\">";
    FUN_00405330(&local_10,3);
    FUN_00545088(*(undefined4 *)(param_1 + 0x30c),local_10);
    FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
    Sleep(0x9c4);
    *(undefined4 *)PTR_DAT_0066b504 = 2;
    FUN_00483bc4(DAT_006d4110);
  }
  else {
    FUN_0055d080(&DAT_005fece0);
    uVar2 = FUN_004032c8(0xb);
    switch(uVar2) {
    case 0:
      FUN_00642c50(0x1cf,&local_8);
      break;
    case 1:
      FUN_00642c50(0x1cf,&local_8);
      break;
    case 2:
      FUN_00642c50(0x1cf,&local_8);
      break;
    case 3:
      FUN_00642c50(0x1cf,&local_8);
      break;
    case 4:
      FUN_00642c50(0x1d0,&local_8);
      break;
    case 5:
      FUN_00642c50(0x1d0,&local_8);
      break;
    case 6:
      FUN_00642c50(0x1d0,&local_8);
      break;
    case 7:
      FUN_00642c50(0x1d1,&local_8);
      break;
    case 8:
      FUN_00642c50(0x1d1,&local_8);
      break;
    case 9:
      FUN_00642c50(0x1d1,&local_8);
      break;
    case 10:
      FUN_00642c50(0x1d1,&local_8);
    }
    pwVar4 = L"<SHAD><B><FONT color=\"#FFFFFF\"><P align=\"center\">";
    FUN_00405330(&local_c,3);
    FUN_00545088(*(undefined4 *)(param_1 + 0x30c),local_c);
    FUN_00487348(*(undefined4 *)PTR_DAT_0066b3ac);
    Sleep(0x9c4);
    *(undefined4 *)PTR_DAT_0066b504 = 1;
    FUN_00483bc4(DAT_006d4110);
  }
  *in_FS_OFFSET = L"</P></FONT></B></SHAD>";
  FUN_00405008(&local_10,3,pwVar4,&LAB_005fecd1);
  return;
}

