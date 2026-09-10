// Address: 004e0ec4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e0ec4(int param_1,int param_2,undefined4 param_3)

{
  HWND pHVar1;
  BOOL BVar2;
  undefined4 uVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar8;
  UINT UVar9;
  WPARAM WVar10;
  WPARAM lParam;
  undefined1 *puVar11;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_28 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004e10c5;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(param_1 + 0x1c));
  BVar2 = IsWindowUnicode(pHVar1);
  if (BVar2 == 0) {
    FUN_00404b6c(&local_10,param_3);
    (**(code **)(**(int **)(local_8 + 0x20) + 0x60))(*(int **)(local_8 + 0x20),param_2,local_10);
  }
  else if (-1 < param_2) {
    uVar3 = FUN_0046cae0(*(undefined4 *)(local_8 + 0x1c));
    WVar4 = FUN_004e0b30(uVar3,param_2);
    if ((int)WVar4 < 0) {
      uVar3 = FUN_0046cae0(*(undefined4 *)(local_8 + 0x1c));
      iVar6 = FUN_004e0b30(uVar3,param_2 + -1);
      uVar3 = FUN_0046cae0(*(undefined4 *)(local_8 + 0x1c));
      iVar7 = FUN_004e0be8(uVar3,param_2 + -1,0xffffffff);
      if (iVar7 == 0) goto LAB_004e1097;
      WVar4 = iVar6 + iVar7;
      FUN_004052cc(&local_c,&DAT_004e10d8,param_3);
    }
    else {
      FUN_004052cc(&local_c,param_3,&DAT_004e10d8);
    }
    UVar9 = 0xb1;
    WVar10 = WVar4;
    lParam = WVar4;
    pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(local_8 + 0x1c));
    SendMessageW(pHVar1,UVar9,WVar10,lParam);
    if ((*(char *)(local_8 + 0x24) == '\0') ||
       (uVar8 = *(char *)(local_8 + 0x25) == '\x01', (bool)uVar8)) {
      LVar5 = FUN_00405250(local_c);
      WVar10 = 0;
      UVar9 = 0xc2;
      pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(local_8 + 0x1c));
      SendMessageW(pHVar1,UVar9,WVar10,LVar5);
    }
    else {
      FUN_004d35b4(local_c,*(undefined1 *)(local_8 + 0x25),&local_14);
      thunk_FUN_0040502c(&local_c,local_14);
      FUN_00405378(local_c,&DAT_004e10e4);
      if ((bool)uVar8) {
        thunk_FUN_0040502c(&local_c,&DAT_004e10d8);
      }
      LVar5 = FUN_00405250(local_c);
      WVar10 = 0;
      UVar9 = 0xc2;
      pHVar1 = (HWND)FUN_0046cae0(*(undefined4 *)(local_8 + 0x1c));
      SendMessageW(pHVar1,UVar9,WVar10,LVar5);
      FUN_00405378(local_c,&DAT_004e10d8);
      if ((bool)uVar8) {
        thunk_FUN_0040502c(&local_c,&DAT_004e10e4);
      }
    }
    if (*(char *)(local_8 + 0x24) != '\0') {
      iVar6 = FUN_00405260(local_c);
      iVar7 = FUN_004e0e98();
      if (WVar4 + iVar6 != iVar7) {
        FUN_00406d44(PTR_PTR_0066ae00,&local_18,puVar11);
        FUN_0040e370(PTR_DAT_0041b680,1,local_18);
        FUN_00404250();
      }
    }
  }
LAB_004e1097:
  puVar11 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004e10cc;
  puStack_2c = (undefined1 *)0x4e10ac;
  FUN_004048d4(&local_18,uStack_30,puVar11);
  puStack_2c = (undefined1 *)0x4e10b4;
  FUN_00404ff0(&local_14);
  puStack_2c = (undefined1 *)0x4e10bc;
  FUN_004048d4(&local_10);
  puStack_2c = (undefined1 *)0x4e10c4;
  FUN_00404ff0(&local_c);
  return;
}

