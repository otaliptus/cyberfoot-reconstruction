// Address: 004dd724
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dd724(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  LPWSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004dd885;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if (*PTR_DAT_0066adfc == '\0') {
LAB_004dd77a:
    puStack_28 = puVar1;
    FUN_00466208(param_1,&local_8);
    FUN_004051d4(param_2,local_8);
  }
  else {
    cVar2 = FUN_00403c10(param_1,PTR_PTR_00461f94);
    if (cVar2 != '\0') {
      cVar2 = FUN_0046cde4(param_1);
      if (cVar2 != '\0') {
        pHVar3 = (HWND)FUN_0046cae0(param_1);
        BVar4 = IsWindowUnicode(pHVar3);
        puVar1 = puStack_28;
        if (BVar4 == 0) goto LAB_004dd77a;
      }
    }
    cVar2 = FUN_00403c10(param_1,PTR_PTR_00461f94);
    if (cVar2 == '\0') {
      iVar5 = FUN_004dd644(param_1,0);
      if (iVar5 == 0) {
        FUN_00466208(param_1,&local_c);
        FUN_004051d4(param_2,local_c);
      }
      else {
        FUN_00466208(param_1,&local_10);
        FUN_004d83a8(iVar5 + 0x38,local_10,param_2);
      }
    }
    else {
      cVar2 = FUN_0046cde4(param_1);
      if (cVar2 == '\0') {
        FUN_00466208(param_1,&local_18);
        FUN_004051d4(&local_14,local_18);
        FUN_004dd690(param_1,local_14,param_2);
      }
      else {
        pHVar3 = (HWND)FUN_0046cae0(param_1);
        iVar5 = GetWindowTextLengthW(pHVar3);
        FUN_004055c4(param_2,iVar5 + 1);
        iVar5 = FUN_00405260(*param_2);
        lpString = (LPWSTR)FUN_00405250(*param_2);
        pHVar3 = (HWND)FUN_0046cae0(param_1);
        GetWindowTextW(pHVar3,lpString,iVar5);
        iVar5 = FUN_00405260(*param_2);
        FUN_004055c4(param_2,iVar5 + -1);
      }
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004dd88c;
  puStack_2c = (undefined1 *)0x4dd86f;
  FUN_004048d4(&local_18,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x4dd877;
  FUN_00404ff0(&local_14);
  puStack_2c = (undefined1 *)0x4dd884;
  FUN_004048f8(&local_10,3);
  return;
}

