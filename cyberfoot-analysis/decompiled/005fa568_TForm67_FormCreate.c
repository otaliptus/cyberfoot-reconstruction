// Address: 005fa568
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm67_FormCreate(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 uVar9;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  
  local_1c = &stack0xfffffffc;
  iVar7 = 0xb;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_005faba6;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_2c = 0x5fa596;
  iVar7 = GetSystemMetrics(0);
  local_2c = 0x5fa59f;
  iVar4 = GetSystemMetrics(1);
  uVar8 = iVar7 - *(int *)(*(int *)(param_1 + 0x304) + 0x48);
  iVar7 = (int)uVar8 >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((uVar8 & 1) != 0);
  }
  FUN_00465978(*(int *)(param_1 + 0x304),iVar7);
  uVar8 = iVar4 - *(int *)(*(int *)(param_1 + 0x304) + 0x4c);
  iVar7 = (int)uVar8 >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((uVar8 & 1) != 0);
  }
  FUN_0046599c(*(int *)(param_1 + 0x304),iVar7);
  FUN_00642c50(0x2c7,&stack0xfffffff0);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x368),unaff_EBX);
  FUN_00642c50(0x28f,&stack0xffffffec);
  FUN_00545088(*(undefined4 *)(param_1 + 0x3dc),unaff_ESI);
  FUN_00642c50(0x290,&stack0xffffffe8);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3d0),unaff_EDI);
  FUN_00642c50(0x291,&local_1c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x36c),local_1c);
  FUN_00642c50(0x292,&local_20);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x370),local_20);
  FUN_00642c50(0x293,&local_24);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x374),local_24);
  uVar9 = 0x5fa680;
  FUN_00642c50(0x294,&stack0xffffffd8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x378),uVar9);
  FUN_00642c50(0x295,&local_2c);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x37c),local_2c);
  FUN_00642c50(0x1e4,&local_30);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3d8),local_30);
  FUN_00642c50(0x3df,&local_34);
  FUN_0054dcb8(*(undefined4 *)(param_1 + 0x3d4),local_34);
  local_2c = 0x5fa6f6;
  FUN_004060a8(&DAT_006d3ff0,PTR_DAT_005f2ae0,1);
  DAT_006d4064 = (int *)FUN_004556ac(PTR_PTR_00448e94,1,DAT_006d3f38);
  (**(code **)(*DAT_006d4064 + 0x18))(DAT_006d4064,"combobox1");
  FUN_00455a4c(DAT_006d4064,2);
  (**(code **)(*DAT_006d4064 + 0x68))(DAT_006d4064,*(undefined4 *)(DAT_006d3f38 + 0x304));
  FUN_0046599c(DAT_006d4064,0xc);
  FUN_00465978(DAT_006d4064,0x3c);
  FUN_004659c4(DAT_006d4064,0x87);
  FUN_00455914(DAT_006d4064,*(undefined4 *)(*(int *)PTR_DAT_0066b64c + 0x2f8));
  piVar1 = DAT_006d4064;
  DAT_006d4064[0x87] = param_1;
  piVar1[0x86] = (int)TForm67_combo11Change;
  (**(code **)(*DAT_006d4064 + 0x108))(DAT_006d4064,0x1a);
  FUN_00466128(DAT_006d4064,0);
  iVar7 = *(int *)(PTR_DAT_0066ac78 + 0x88);
  if (iVar7 == 1) {
    FUN_005f4480(param_1);
  }
  else if (iVar7 == 3) {
    FUN_005f5080(param_1,PTR_DAT_0066ac78);
  }
  else if (iVar7 == 7) {
    FUN_005f40d4(param_1,PTR_DAT_0066ac78);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6)) {
    DAT_006d3f90 = 1;
    FUN_00465978(*(undefined4 *)(param_1 + 0x3f4),0x18);
    FUN_00466128(*(undefined4 *)(param_1 + 0x3f4),1);
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
      FUN_00642c50(0xde,&local_38);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f4),local_38);
      FUN_00642c50(0xdc,&local_3c);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f4),local_3c);
      FUN_00642c50(0x3e2,&local_40);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f4),local_40);
      FUN_00642c50(0x3e3,&local_44);
      FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f4),local_44);
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) {
      if (*PTR_DAT_0066b6a0 == '\0') {
        FUN_00642c50(0xdd,&local_50);
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f4),local_50);
        DAT_006d3f90 = 2;
        FUN_00466128(*(undefined4 *)(param_1 + 0x3f4),0);
      }
      else {
        FUN_00642c50(0xdf,&local_48);
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f4),local_48);
        FUN_00642c50(0xdd,&local_4c);
        FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f4),local_4c);
      }
    }
    FUN_0054c10c(*(undefined4 *)(param_1 + 0x3f4),0);
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x3f4),0);
  }
  if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 1) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 2)) {
    DAT_006d3f90 = 0;
    iVar7 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
    if (1 < iVar7) {
      FUN_00465978(*(undefined4 *)(param_1 + 0x3f0),0x18);
      FUN_00466128(*(undefined4 *)(param_1 + 0x3f0),1);
      iVar7 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066aca0);
      if (-1 < iVar7) {
        iVar7 = iVar7 + 1;
        iVar4 = 0;
        do {
          cVar3 = FUN_005fa4dc(param_1,iVar4);
          if (cVar3 != '\0') {
            local_2c = 0x5fa9d5;
            FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar4 * 0x294),&local_5c
                        );
            local_2c = local_5c;
            local_30 = &LAB_005fabe8;
            local_34 = 0x5fa9ea;
            FUN_00404c64(&local_58,3);
            FUN_004051d4(&local_54,local_58);
            FUN_0040526c(&local_54,
                         *(undefined4 *)
                          (PTR_DAT_0066b294 +
                          *(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar4 * 0x294) * 4));
            FUN_0054cd98(*(undefined4 *)(param_1 + 0x3f0),local_54);
            FUN_00405eec(DAT_006d3ff0);
            local_2c = 0x5faa4a;
            FUN_004060a8(&DAT_006d3ff0,PTR_DAT_005f2ae0,1);
            iVar5 = FUN_00405ef4(DAT_006d3ff0);
            DAT_006d3ff0[iVar5] = iVar4;
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_c = -1;
      iVar4 = FUN_00405ef4(DAT_006d3ff0);
      iVar7 = local_c;
      if (-1 < iVar4) {
        iVar4 = iVar4 + 1;
        iVar5 = 0;
        do {
          if (((*(char *)(*(int *)PTR_DAT_0066aca0 + 0x14c + DAT_006d3ff0[iVar5] * 0x294) != '\0')
              || (*(char *)(*(int *)PTR_DAT_0066aca0 + 0x290 + DAT_006d3ff0[iVar5] * 0x294) != '\0')
              ) && ((iVar7 = iVar5, *(int *)(PTR_DAT_0066ac78 + 0x88) == 1 ||
                    ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 2 &&
                     (((*(int *)(PTR_DAT_0066ac78 + 0x110) < 3 &&
                       (iVar6 = FUN_0065a250(iVar5,2,1), 0 < iVar6)) ||
                      (*(char *)(*(int *)PTR_DAT_0066aca0 + 0x290 + DAT_006d3ff0[iVar5] * 0x294) !=
                       '\0')))))))) break;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + -1;
          iVar7 = local_c;
        } while (iVar4 != 0);
      }
      local_c = iVar7;
      if (local_c < 0) {
        FUN_0054c10c(*(undefined4 *)(param_1 + 0x3f0),0);
        DAT_006d3f90 = *DAT_006d3ff0;
      }
      else {
        FUN_0054c10c(*(undefined4 *)(param_1 + 0x3f0),local_c);
        DAT_006d3f90 = DAT_006d3ff0[local_c];
      }
    }
  }
  else {
    FUN_00466128(*(undefined4 *)(param_1 + 0x3f0),0);
  }
  FUN_005f768c(param_1);
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005fabad;
  local_20 = (undefined1 *)0x5fab98;
  FUN_004048f8(&local_5c,2,puVar2);
  local_20 = (undefined1 *)0x5faba5;
  FUN_00405008(&local_54,0x12);
  return;
}

