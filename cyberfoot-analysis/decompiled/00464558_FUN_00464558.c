// Address: 00464558
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464558(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  LPRECT lpRect;
  HWND hWnd;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  tagPOINT local_14;
  int local_c;
  undefined4 local_8;
  
  bVar8 = 0;
  puStack_34 = &stack0xfffffffc;
  puStack_38 = &LAB_004646fd;
  uStack_3c = *in_FS_OFFSET;
  DAT_0066cb70 = param_1;
  *in_FS_OFFSET = &uStack_3c;
  local_c = 0;
  DAT_0066cb78 = 0;
  local_8 = param_3;
  if (*(char *)(param_1 + 0x9b) == '\0') {
    puStack_34 = &stack0xfffffffc;
    FUN_00403c80(param_1,&local_c);
    if (DAT_0066cb70 == 0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == 0) {
      local_c = FUN_00463804(PTR_PTR_00460ae4,1,param_1);
      DAT_0066cb78 = 1;
    }
  }
  else {
    FUN_00403c80(param_1,&local_c);
    if (DAT_0066cb70 == 0) {
      *in_FS_OFFSET = uStack_3c;
      return;
    }
    if (local_c == 0) {
      local_c = FUN_0046391c(PTR_PTR_00460c38,1,param_1);
      DAT_0066cb78 = 1;
    }
    uVar1 = *(undefined4 *)(local_c + 0x38);
    cVar3 = FUN_00403c10(uVar1,PTR_PTR_00461f94);
    if (cVar3 == '\0') {
      iVar2 = *(int *)(local_c + 0x38);
      if ((*(int *)(iVar2 + 0x30) == 0) &&
         (cVar3 = FUN_00403c10(iVar2,PTR_PTR_00461f94), cVar3 == '\0')) {
        GetCursorPos(&local_14);
        *(LONG *)(local_c + 0x44) = local_14.x;
        *(LONG *)(local_c + 0x48) = local_14.y;
      }
      else {
        FUN_0041c968(0,0,local_24);
        FUN_00465d20(iVar2,local_24,&local_1c);
        *(undefined4 *)(local_c + 0x44) = local_1c;
        *(undefined4 *)(local_c + 0x48) = local_18;
      }
      FUN_0041c968(*(int *)(local_c + 0x44) + *(int *)(*(int *)(local_c + 0x38) + 0x48),
                   *(int *)(local_c + 0x48) + *(int *)(*(int *)(local_c + 0x38) + 0x4c),&local_1c);
      *(undefined4 *)(local_c + 0x4c) = local_1c;
      *(undefined4 *)(local_c + 0x50) = local_18;
    }
    else {
      lpRect = (LPRECT)(local_c + 0x44);
      hWnd = (HWND)FUN_0046cae0(uVar1);
      GetWindowRect(hWnd,lpRect);
    }
    puVar6 = (undefined4 *)(local_c + 0x60 + (uint)bVar8 * -8);
    puVar4 = (undefined4 *)(local_c + 0x48 + (uint)bVar8 * -8);
    *(undefined4 *)(local_c + 0x5c) = *(undefined4 *)(local_c + 0x44);
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
    *puVar6 = *puVar4;
    *puVar7 = *puVar5;
    puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
  }
  FUN_004643e8(local_c,param_2,local_8);
  *in_FS_OFFSET = uStack_3c;
  return;
}

