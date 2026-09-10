// Address: 004dc438
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc438(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_004dc5ba;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar2 = *(int *)(param_1 + 100);
  local_c = param_1;
  if (iVar2 == 0) {
    local_8 = 0;
    puStack_28 = &stack0xfffffffc;
  }
  else if (*(int *)(iVar2 + 0x6c) == 0) {
    local_8 = FUN_004770e0(iVar2);
  }
  else {
    puStack_28 = &stack0xfffffffc;
    local_8 = FUN_004770e0(*(int *)(iVar2 + 0x6c));
  }
  if ((((*PTR_DAT_0066adfc == '\0') || (*(int *)(local_c + 100) == 0)) || (param_2 == 0)) ||
     ((DAT_004dc5cc != (*(ushort *)(local_c + 0x1c) & _DAT_004dc5c8) ||
      (*(char *)(local_c + 0x3e) == '\0')))) goto LAB_004dc59f;
  cVar1 = FUN_004dc240();
  if (cVar1 == '\0') goto LAB_004dc59f;
  FUN_004dc054(local_c,&local_10,puVar4);
  iVar2 = FUN_00478b4c(local_c);
  uVar3 = 0;
  if ((iVar2 == 0) && (uVar3 = *(short *)(local_c + 0x60) == 0, !(bool)uVar3)) {
    iVar2 = *(int *)(local_c + 100);
    uVar3 = iVar2 == 0;
    if ((!(bool)uVar3) && (uVar3 = false, *(int *)(iVar2 + 100) == 0)) {
      cVar1 = FUN_00403c10(*(undefined4 *)(iVar2 + 4),PTR_PTR_00475ac4);
      uVar3 = cVar1 == '\0';
      if (!(bool)uVar3) goto LAB_004dc54d;
    }
    FUN_004db940(*(undefined2 *)(local_c + 0x60),&local_14);
    FUN_00405330(&local_10,3);
  }
LAB_004dc54d:
  FUN_004dc29c(&local_18);
  FUN_00405378(local_18,local_10,puVar5);
  if (!(bool)uVar3) {
    FUN_004dc3a8(local_10);
    if ((*(int *)(local_c + 100) == *(int *)(param_2 + 0x34)) ||
       (*(int *)(*(int *)(local_c + 100) + 0x6c) != 0)) {
      cVar1 = FUN_00403c10(param_2,PTR_PTR_00475ac4,puVar6);
      if ((cVar1 != '\0') && (*(int *)(param_2 + 0x38) != 0)) {
        DrawMenuBar(*(HWND *)(param_2 + 0x38));
      }
    }
  }
LAB_004dc59f:
  puVar4 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004dc5c1;
  puStack_2c = (undefined1 *)0x4dc5b9;
  FUN_00405008(&local_18,3,puVar4);
  return;
}

