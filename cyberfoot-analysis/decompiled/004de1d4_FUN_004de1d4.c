// Address: 004de1d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004de1d4(HWND param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  int iVar4;
  LPWSTR lpClassName;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004de265;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pHVar2 = (HWND)FUN_0046cae0(*(undefined4 *)(*(int *)(param_4 + -4) + 0x3c));
  pHVar3 = GetParent(*(HWND *)(*(int *)(param_4 + -4) + 0x40));
  if (pHVar2 == pHVar3) {
    FUN_004055c4(&local_8,0xff);
    iVar4 = FUN_00405260(local_8);
    lpClassName = (LPWSTR)FUN_00405250(local_8);
    iVar4 = GetClassNameW(param_1,lpClassName,iVar4);
    FUN_004055c4(&local_8,iVar4);
    FUN_004099a8(local_8,L"EDIT");
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004de26c;
  puStack_1c = (undefined1 *)0x4de264;
  FUN_00404ff0(&local_8,uStack_20,puVar1);
  return;
}

