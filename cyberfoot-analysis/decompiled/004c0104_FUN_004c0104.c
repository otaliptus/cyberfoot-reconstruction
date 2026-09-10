// Address: 004c0104
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c0104(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  SIZE_T dwBytes;
  HGLOBAL hGlobal;
  LPSTREAM *ppstm;
  HRESULT HVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int *piStackY_44;
  undefined1 *puVar6;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_2c = &stack0xfffffffc;
  puVar6 = &stack0xfffffffc;
  local_18 = (int *)0x0;
  puStack_30 = &LAB_004c0305;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_3;
  local_8 = param_2;
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((cVar1 == '\0') &&
     ((iVar2 = (*(code *)**(undefined4 **)param_1[0xb])(), extraout_EDX != 0 || (iVar2 != 0)))) {
    dwBytes = (*(code *)**(undefined4 **)param_1[0xb])();
    hGlobal = GlobalAlloc(2,dwBytes);
    if (hGlobal == (HGLOBAL)0x0) {
      FUN_0040e370(PTR_DAT_00408738,1,"Could not allocate memory for image");
      FUN_00404250();
    }
    FUN_00406880(&local_18);
    ppstm = (LPSTREAM *)FUN_00406880(&local_18);
    piStackY_44 = (int *)0x4c018f;
    HVar3 = CreateStreamOnHGlobal(hGlobal,-1,ppstm);
    if (HVar3 == 0) {
      (*(code *)**(undefined4 **)param_1[0xb])();
      piStackY_44 = local_18;
      (**(code **)(*local_18 + 0x10))();
      iVar2 = (*(code *)**(undefined4 **)param_1[0xb])();
      if (extraout_EDX_00 == 0 && iVar2 == 0) {
        uVar4 = FUN_0042b5a8(local_8,iVar2);
        local_14 = FUN_004af018(PTR_DAT_004ae274,1,uVar4);
        uStack_34 = 0;
        local_10 = FUN_004b1960(PTR_DAT_004ae1c4,1,local_18);
        iVar2 = FUN_004b1a20(local_10);
        if ((iVar2 == 2) && ((char)param_1[0x11] != '\0')) {
          piVar5 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
          piStackY_44 = (int *)*in_FS_OFFSET;
          *in_FS_OFFSET = &piStackY_44;
          FUN_004208f4(param_1[0xb]);
          (**(code **)(*piVar5 + 0x54))(piVar5,param_1[0xb]);
          FUN_00431448(piVar5,0);
          (**(code **)(*piVar5 + 0x3c))(piVar5,1);
          FUN_0042b20c(local_8,local_c,piVar5);
          *in_FS_OFFSET = piStackY_44;
          FUN_00403a84(piVar5,piStackY_44,puVar6);
          return;
        }
        iVar2 = FUN_004b1b8c(local_10);
        param_1[0xd] = iVar2;
        iVar2 = FUN_004b1b24(local_10);
        param_1[0xe] = iVar2;
        piStackY_44 = (int *)(local_c[3] - local_c[1]);
        FUN_004b1864(local_14,local_10,*local_c);
        FUN_00403a84(local_10);
        FUN_00403a84(local_14);
      }
      FUN_00406880(&local_18);
    }
    else {
      GlobalFree(hGlobal);
    }
  }
  puVar6 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004c030c;
  puStack_30 = (undefined1 *)0x4c0304;
  FUN_00406880(&local_18,uStack_34,puVar6);
  return;
}

