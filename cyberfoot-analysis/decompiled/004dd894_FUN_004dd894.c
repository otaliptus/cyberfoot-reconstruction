// Address: 004dd894
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004dd894(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined1 *in_stack_ffffffd0;
  int iVar8;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_004dd9b8;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puVar1 = &stack0xfffffffc;
  if (*PTR_DAT_0066adfc == '\0') {
LAB_004dd8e9:
    puStack_20 = puVar1;
    FUN_00404b6c(&local_8,param_2);
    FUN_00466238(param_1,local_8);
  }
  else {
    cVar2 = FUN_00403c10(param_1,PTR_PTR_00461f94);
    if (cVar2 != '\0') {
      cVar2 = FUN_0046cde4(param_1);
      if (cVar2 != '\0') {
        hWnd = (HWND)FUN_0046cae0(param_1);
        in_stack_ffffffd0 = (undefined1 *)0x4dd8e5;
        BVar3 = IsWindowUnicode(hWnd);
        puVar1 = puStack_20;
        if (BVar3 == 0) goto LAB_004dd8e9;
      }
    }
    cVar2 = FUN_00403c10(param_1,PTR_PTR_00461f94);
    if (cVar2 == '\0') {
      iVar4 = FUN_004dd644(param_1,1);
      in_stack_ffffffd0 = &LAB_004dd620;
      iVar8 = iVar4;
      FUN_00466208(param_1,&local_c);
      FUN_004d8410(param_2,iVar4 + 0x38,local_c,in_stack_ffffffd0,iVar8);
    }
    else {
      cVar2 = FUN_0046cde4(param_1);
      uVar7 = cVar2 == '\0';
      if ((bool)uVar7) {
        FUN_004dd6c0(param_1,param_2);
      }
      else {
        FUN_004dd724(param_1,&local_10);
        FUN_00405378(local_10,param_2);
        if (!(bool)uVar7) {
          uVar5 = FUN_0046cae0(param_1);
          uVar6 = FUN_00405250(param_2);
          FUN_004d3cb8(uVar5,uVar6);
          in_stack_ffffffd0 = (undefined1 *)0x4dd992;
          FUN_004673cc(param_1,0xb012,0,0);
        }
      }
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_004dd9bf;
  FUN_00404ff0(&local_10,in_stack_ffffffd0,puVar1);
  FUN_004048d4(&local_c);
  FUN_004048d4(&local_8);
  return;
}

