// Address: 004b0b90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b0b90(int *param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  SIZE_T dwBytes;
  HGLOBAL hGlobal;
  LPSTREAM *ppstm;
  HRESULT HVar5;
  undefined4 uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_c = (int *)0x0;
  puStack_40 = &LAB_004b0df8;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_2;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar2 == '\0') &&
     ((iVar4 = (*(code *)**(undefined4 **)param_1[0xb])(), extraout_EDX != 0 || (iVar4 != 0)))) {
    dwBytes = (*(code *)**(undefined4 **)param_1[0xb])();
    hGlobal = GlobalAlloc(2,dwBytes);
    if (hGlobal == (HGLOBAL)0x0) {
      FUN_0040e370(PTR_DAT_00408738,1,"Could not allocate memory for image");
      FUN_00404250();
    }
    FUN_00406880(&local_c);
    local_10 = 0;
    ppstm = (LPSTREAM *)FUN_00406880(&local_c);
    HVar5 = CreateStreamOnHGlobal(hGlobal,-1,ppstm);
    if (HVar5 == 0) {
      (*(code *)**(undefined4 **)param_1[0xb])();
      (**(code **)(*local_c + 0x10))();
      iVar4 = (*(code *)**(undefined4 **)param_1[0xb])();
      if (local_10 >> 0x1f == extraout_EDX_00 && local_10 == iVar4) {
        uStack_44 = 0;
        uVar6 = FUN_004b1960(PTR_DAT_004ae1c4,1,local_c);
        uVar3 = FUN_004b1bb8(uVar6);
        *(undefined1 *)(param_1 + 0x16) = uVar3;
        uVar3 = FUN_004b1bd0(uVar6);
        *(undefined1 *)((int)param_1 + 0x59) = uVar3;
        iVar4 = FUN_004b1b50(uVar6);
        param_1[0x15] = iVar4;
        iVar4 = FUN_004b1b68(uVar6);
        param_1[0x17] = iVar4;
        iVar4 = FUN_004b1b8c(uVar6);
        param_1[0xd] = iVar4;
        iVar4 = FUN_004b1b24(uVar6);
        param_1[0xe] = iVar4;
        iVar4 = FUN_004b1b8c(uVar6);
        param_1[0xd] = iVar4;
        iVar4 = FUN_004b1b24(uVar6);
        param_1[0xe] = iVar4;
        iVar4 = FUN_004b1a20(uVar6);
        if ((iVar4 == 2) && (cVar2 = (**(code **)(*param_1 + 0x28))(), cVar2 != '\0')) {
          local_14 = FUN_004b1e78(PTR_DAT_004add74,1);
          if ((char)param_1[0x12] == '\0') {
            local_1c = FUN_004b1d20(PTR_DAT_004ae21c,1,local_c,0);
            FUN_004b1e4c(local_1c,0,param_1[0xe] + -1,&local_18);
            FUN_00403a84(local_1c);
          }
          else {
            local_18 = FUN_004b1cd0(0xff,param_1[0x13]);
          }
          FUN_004b1ef0(local_14,local_18,local_18,0);
          uVar14 = 0;
          uVar13 = 0;
          fVar12 = (float)param_1[0xd];
          fVar11 = (float)param_1[0xe];
          uVar10 = 2;
          uVar8 = 0;
          uVar7 = 0;
          uVar9 = local_14;
          FUN_004aeba4(local_2c);
          FUN_004b18f4(local_8,uVar6,local_2c,uVar7,uVar8,uVar9,uVar10,fVar11,fVar12,uVar13,uVar14);
          FUN_00403a84(local_14);
        }
        else {
          FUN_004b1864(local_8,uVar6,*param_3,param_3[3] - param_3[1],param_3[2] - *param_3,
                       param_3[1]);
        }
        FUN_00403a84(uVar6);
      }
      FUN_00406880(&local_c);
    }
    else {
      GlobalFree(hGlobal);
    }
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004b0dff;
  puStack_40 = (undefined1 *)0x4b0df7;
  FUN_00406880(&local_c,uStack_44,puVar1);
  return;
}

