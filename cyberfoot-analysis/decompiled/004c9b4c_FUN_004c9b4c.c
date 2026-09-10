// Address: 004c9b4c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c9b4c(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  SIZE_T dwBytes;
  HGLOBAL hGlobal;
  LPSTREAM *ppstm;
  HRESULT HVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 local_40 [16];
  uint local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  int local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_60 = &stack0xfffffffc;
  local_14 = (int *)0x0;
  local_10 = *param_2;
  local_c = param_2[1];
  puStack_64 = &LAB_004c9db9;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  local_8 = param_1;
  puVar2 = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
  (**(code **)(*param_3 + 0x58))(param_3,puVar2);
  dwBytes = (**(code **)*puVar2)();
  hGlobal = GlobalAlloc(2,dwBytes);
  if (hGlobal == (HGLOBAL)0x0) {
    FUN_00403a84(puVar2);
    FUN_0040e370(PTR_DAT_00408738,1,"Could not allocate memory for image");
    FUN_00404250();
  }
  FUN_00406880(&local_14);
  local_18 = 0;
  ppstm = (LPSTREAM *)FUN_00406880(&local_14);
  HVar3 = CreateStreamOnHGlobal(hGlobal,-1,ppstm);
  if (HVar3 == 0) {
    (**(code **)*puVar2)();
    (**(code **)(*local_14 + 0x10))();
    iVar4 = (**(code **)*puVar2)();
    if (local_18 >> 0x1f == extraout_EDX && local_18 == iVar4) {
      uVar5 = FUN_004b1960(PTR_DAT_004ae1c4,1,local_14,0);
      iVar4 = FUN_004b1a20(uVar5);
      if (iVar4 == 2) {
        uVar6 = FUN_004b1d20(PTR_DAT_004ae21c,1,local_14,0);
        puVar13 = &local_20;
        iVar4 = FUN_004b1b24(uVar5);
        FUN_004b1e4c(uVar6,0,iVar4 + -1,puVar13);
        FUN_00403a84(uVar6);
        local_19 = FUN_004b1d14(local_20);
        local_1a = FUN_004b1d18(local_20);
        local_1b = FUN_004b1d1c(local_20);
        uVar7 = FUN_004b1e78(PTR_DAT_004add74,1);
        uVar14 = 0;
        uVar6 = FUN_004b1d04(local_19,local_1a,local_1b,0);
        uVar8 = FUN_004b1d04(local_19,local_1a,local_1b);
        FUN_004b1ef0(uVar7,uVar8,uVar6,uVar14);
        uVar15 = 0;
        uVar12 = 0;
        local_28 = FUN_004b1b8c(uVar5);
        uStack_24 = 0;
        fVar11 = (float)local_28;
        local_30 = FUN_004b1b24(uVar5);
        uStack_2c = 0;
        fVar10 = (float)local_30;
        uVar9 = 2;
        uVar14 = 0;
        uVar8 = 0;
        uVar6 = uVar7;
        FUN_004b1b8c(uVar5);
        FUN_004b1b24(uVar5);
        FUN_004aeba4(local_40);
        FUN_004b18f4(local_8,uVar5,local_40,uVar8,uVar14,uVar6,uVar9,fVar10,fVar11,uVar12,uVar15);
        FUN_00403a84(uVar7);
      }
      else {
        uVar6 = local_c;
        uVar7 = FUN_004b1b8c(uVar5);
        uVar8 = FUN_004b1b24(uVar5);
        FUN_004b1864(local_8,uVar5,local_10,uVar8,uVar7,uVar6);
      }
      FUN_00403a84(uVar5);
    }
    FUN_00406880(&local_14);
  }
  else {
    GlobalFree(hGlobal);
  }
  FUN_00403a84(puVar2);
  puVar1 = puStack_60;
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_004c9dc0;
  puStack_64 = (undefined1 *)0x4c9db8;
  FUN_00406880(&local_14,uStack_68,puVar1);
  return;
}

