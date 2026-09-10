// Address: 004c9648
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c9648(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  SIZE_T dwBytes;
  HGLOBAL hGlobal;
  LPSTREAM *ppstm;
  HRESULT HVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piStackY_54;
  undefined1 *puVar3;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  local_10 = (int *)0x0;
  local_2c = *param_3;
  local_28 = param_3[1];
  local_24 = param_3[2];
  local_20 = param_3[3];
  puStack_40 = &LAB_004c9808;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_2;
  local_18 = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
  (**(code **)(*param_4 + 0x58))(param_4,local_18);
  dwBytes = (**(code **)*local_18)();
  hGlobal = GlobalAlloc(2,dwBytes);
  if (hGlobal == (HGLOBAL)0x0) {
    FUN_00403a84(local_18);
    FUN_0040e370(PTR_DAT_00408738,1,"Could not allocate memory for image");
    FUN_00404250();
  }
  FUN_00406880(&local_10);
  local_14 = 0;
  ppstm = (LPSTREAM *)FUN_00406880(&local_10);
  piStackY_54 = (int *)0x4c96dd;
  HVar1 = CreateStreamOnHGlobal(hGlobal,-1,ppstm);
  if (HVar1 == 0) {
    (**(code **)*local_18)();
    piStackY_54 = local_10;
    (**(code **)(*local_10 + 0x10))();
    iVar2 = (**(code **)*local_18)();
    if (local_14 >> 0x1f == extraout_EDX && local_14 == iVar2) {
      uStack_44 = 0;
      local_c = FUN_004b1960(PTR_DAT_004ae1c4,1,local_10);
      iVar2 = FUN_004b1a20(local_c);
      if (iVar2 == 2) {
        local_1c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
        piStackY_54 = (int *)*in_FS_OFFSET;
        *in_FS_OFFSET = &piStackY_54;
        FUN_004208f4(local_18);
        (**(code **)(*local_1c + 0x54))(local_1c,local_18);
        FUN_00431448(local_1c,0);
        (**(code **)(*local_1c + 0x3c))(local_1c,1);
        FUN_0042b20c(local_8,&local_2c,local_1c);
        *in_FS_OFFSET = piStackY_54;
        FUN_00403a84(local_1c,piStackY_54,puVar3);
        return;
      }
      piStackY_54 = (int *)(local_20 - local_28);
      FUN_004b1864(param_1,local_c,local_2c);
      FUN_00403a84(local_c);
    }
    FUN_00406880(&local_10);
  }
  else {
    GlobalFree(hGlobal);
  }
  FUN_00403a84(local_18);
  puVar3 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004c980f;
  puStack_40 = (undefined1 *)0x4c9807;
  FUN_00406880(&local_10,uStack_44,puVar3);
  return;
}

