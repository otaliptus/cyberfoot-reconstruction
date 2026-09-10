// Address: 005f60a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005f60a4(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_EBX;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined *puVar6;
  undefined *puVar7;
  int *in_FS_OFFSET;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined1 local_7c [16];
  undefined4 local_6c [4];
  undefined4 *local_5c;
  int local_58;
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 *local_2c;
  undefined *local_28;
  int local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  int local_c;
  
  local_1c = (undefined4 *)&stack0xfffffffc;
  iVar4 = 0x28;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_005f73cd;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined *)0x5f60cf;
  FUN_00404ff0(&stack0xffffffec);
  local_28 = (undefined *)0x0;
  local_2c = (undefined4 *)0x5f60e4;
  FUN_004060a8(&stack0xfffffff0,PTR_DAT_005f6084,1);
  local_28 = (undefined *)0x5f60f8;
  (**(code **)(**(int **)(param_1 + 0x308) + 0x1dc))();
  local_28 = (undefined *)0x5f6106;
  iVar4 = FUN_00473f5c(*(undefined4 *)(param_1 + 0x2f8));
  if (1 < iVar4) {
    local_28 = (undefined *)0x5f6117;
    iVar4 = FUN_00473f5c(*(undefined4 *)(param_1 + 0x2f8));
    iVar4 = iVar4 + -2;
    if (0 < iVar4) {
      do {
        local_28 = (undefined *)0x5f6133;
        FUN_004741a8(*(undefined4 *)(param_1 + 0x2f8),2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    local_c = DAT_006d3ff4;
  }
  else {
    iVar4 = *(int *)(PTR_DAT_0066ac78 + 0x88);
    if ((((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 4)) || (iVar4 == 6)) {
      local_c = DAT_006d3f90;
    }
    else {
      local_c = 0;
    }
  }
  local_28 = (undefined *)0x5f619a;
  FUN_00405eec(*(undefined4 *)PTR_DAT_0066b154);
  puVar6 = (undefined *)0x0;
  local_28 = (undefined *)0x5f61a8;
  iVar4 = FUN_00405ef4(*(undefined4 *)PTR_DAT_0066b154);
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    iVar5 = 0;
    puVar7 = puVar6;
    do {
      puVar6 = puVar7;
      if (((*(double *)(*(int *)PTR_DAT_0066b154 + 0x40 + iVar5 * 600) ==
            *(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10)) &&
          (*(int *)(*(int *)PTR_DAT_0066b154 + 0x30 + iVar5 * 600) ==
           *(int *)(PTR_DAT_0066ac78 + 0x88))) &&
         (*(int *)(*(int *)PTR_DAT_0066b154 + 0x3c + iVar5 * 600) == local_c)) {
        puVar6 = puVar7 + 1;
        local_2c = (undefined4 *)0x5f621a;
        local_28 = puVar6;
        FUN_004060a8(&stack0xfffffff0,PTR_DAT_005f6084,1);
        unaff_EBX[(int)puVar7] = iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
      puVar7 = puVar6;
    } while (iVar4 != 0);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    if (0 < (int)puVar6) {
      if (*(int *)(PTR_DAT_0066b40c +
                  *(int *)PTR_DAT_0066b080 * 4 +
                  *(int *)(PTR_DAT_0066ae98 + DAT_006d3ff4 * 0x568 + 0x530) * 0x50 + -0x54) == -1) {
        local_28 = &DAT_005f73e8;
        local_2c = (undefined4 *)0x5f628a;
        FUN_00409dd8(*(undefined4 *)PTR_DAT_0066b080,&local_1c);
        local_2c = local_1c;
        local_30 = &DAT_005f73f4;
        local_34 = (undefined4 *)0x5f629f;
        FUN_00404c64(&stack0xffffffe8,3);
        local_28 = (undefined *)0x5f62aa;
        FUN_004051d4(&stack0xffffffec,unaff_EDI);
      }
      else {
        iVar4 = *(int *)(*(int *)PTR_DAT_0066b154 + 0x34 + *unaff_EBX * 600);
        if (iVar4 == 0x65) {
          local_28 = (undefined *)0x5f62d3;
          thunk_FUN_0040502c(&stack0xffffffec,L" - Final");
        }
        else if (iVar4 == 0x66) {
          local_28 = (undefined *)0x5f62e7;
          thunk_FUN_0040502c(&stack0xffffffec,&DAT_005f741c);
        }
        else if (iVar4 == 0xc9) {
          local_28 = (undefined *)0x5f62fd;
          thunk_FUN_0040502c(&stack0xffffffec,L" - Semi-Final");
        }
        else if (iVar4 == 0xca) {
          local_28 = (undefined *)0x5f6313;
          thunk_FUN_0040502c(&stack0xffffffec,&DAT_005f7468);
        }
        else if (iVar4 == 0x191) {
          local_28 = (undefined *)0x5f6329;
          thunk_FUN_0040502c(&stack0xffffffec,L" - Quartas de Final");
        }
        else if (iVar4 == 0x192) {
          local_28 = (undefined *)0x5f633f;
          thunk_FUN_0040502c(&stack0xffffffec,&DAT_005f74c8);
        }
      }
    }
    local_28 = (undefined *)0x5f635a;
    FUN_00404bf0(&local_24,"Campeonato ",*(undefined4 *)(PTR_PTR_0066b288 + DAT_006d3ff4 * 4));
    local_28 = (undefined *)0x5f6365;
    FUN_004051d4(&local_20,local_24);
    local_28 = (undefined *)0x5f6373;
    FUN_004052cc(&stack0xffffffec,local_20,unaff_ESI);
    local_28 = (undefined *)0x5f6384;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x328),unaff_ESI);
  }
  if (-1 < (int)(puVar6 + -1)) {
    iVar4 = 0;
    do {
      local_28 = (undefined *)0x5f63a8;
      (**(code **)(**(int **)(param_1 + 0x308) + 0x1d0))(*(int **)(param_1 + 0x308),1);
      local_28 = (undefined *)0x5f63b6;
      FUN_00409dd8(unaff_EBX[iVar4],&local_2c);
      local_28 = (undefined *)0x5f63c1;
      FUN_004051d4(&local_28,local_2c);
      piVar1 = *(int **)(param_1 + 0x308);
      local_2c = (undefined4 *)0x5f63d8;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_2c = (undefined4 *)0x5f63e7;
      (**(code **)(*piVar1 + 0x194))(piVar1,0,iVar5 + -1);
      local_2c = (undefined4 *)0x5f6401;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + unaff_EBX[iVar4] * 600),&local_30);
      if (local_30 == (undefined *)0x0) {
        local_2c = (undefined4 *)0x0;
        piVar1 = *(int **)(param_1 + 0x308);
        local_30 = (undefined *)0x5f64f4;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_30 = (undefined *)0x5f6506;
        (**(code **)(*piVar1 + 0x194))(piVar1,1,iVar5 + -1);
      }
      else {
        local_2c = (undefined4 *)0x5f6415;
        iVar5 = FUN_00405eec(DAT_006d3fec);
        local_2c = (undefined4 *)(iVar5 + 1);
        local_30 = (undefined *)0x5f642c;
        FUN_004060a8(&DAT_006d3fec,PTR_DAT_005f2ac0,1);
        local_2c = (undefined4 *)0x5f643b;
        uVar3 = FUN_004aa034(PTR_LAB_004a5420,1);
        local_2c = (undefined4 *)0x5f6447;
        iVar5 = FUN_00405ef4(DAT_006d3fec);
        *(undefined4 *)(DAT_006d3fec + iVar5 * 4) = uVar3;
        local_2c = (undefined4 *)0x5f646a;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + unaff_EBX[iVar4] * 600),&local_34);
        local_2c = local_34;
        local_30 = (undefined *)0x5f6478;
        iVar5 = FUN_00405ef4(DAT_006d3fec);
        puVar2 = local_2c;
        piVar1 = *(int **)(DAT_006d3fec + iVar5 * 4);
        local_2c = (undefined4 *)0x5f6487;
        (**(code **)(*piVar1 + 0x4c))(piVar1,puVar2);
        piVar1 = *(int **)(param_1 + 0x308);
        local_2c = (undefined4 *)0x5f649a;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_2c = (undefined4 *)0x5f64a7;
        FUN_00416244(&local_44,iVar5 + -1,0xfc);
        local_2c = &local_44;
        local_30 = (undefined *)0x5f64b8;
        FUN_00416478(local_54,"nxescudo1");
        puVar2 = local_2c;
        local_2c = (undefined4 *)0x5f64c3;
        iVar5 = FUN_004f77e4(piVar1,local_54,puVar2);
        local_2c = (undefined4 *)(iVar5 + 8);
        local_30 = (undefined *)0x5f64d1;
        iVar5 = FUN_00405ef4(DAT_006d3fec);
        *local_2c = *(undefined4 *)(DAT_006d3fec + iVar5 * 4);
      }
      local_2c = (undefined4 *)0x5f6521;
      FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 4 + unaff_EBX[iVar4] * 600),&local_58)
      ;
      if (local_58 == 0) {
        local_2c = (undefined4 *)&DAT_005f7544;
        piVar1 = *(int **)(param_1 + 0x308);
        local_30 = (undefined *)0x5f6618;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_30 = (undefined *)0x5f662a;
        (**(code **)(*piVar1 + 0x194))(piVar1,5,iVar5 + -1);
      }
      else {
        local_2c = (undefined4 *)0x5f6535;
        iVar5 = FUN_00405eec(DAT_006d3fec);
        local_2c = (undefined4 *)(iVar5 + 1);
        local_30 = (undefined *)0x5f654c;
        FUN_004060a8(&DAT_006d3fec,PTR_DAT_005f2ac0,1);
        local_2c = (undefined4 *)0x5f655b;
        uVar3 = FUN_004aa034(PTR_LAB_004a5420,1);
        local_2c = (undefined4 *)0x5f6567;
        iVar5 = FUN_00405ef4(DAT_006d3fec);
        *(undefined4 *)(DAT_006d3fec + iVar5 * 4) = uVar3;
        local_2c = (undefined4 *)0x5f658b;
        FUN_00645508(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 4 + unaff_EBX[iVar4] * 600),
                     &local_5c);
        local_2c = local_5c;
        local_30 = (undefined *)0x5f6599;
        iVar5 = FUN_00405ef4(DAT_006d3fec);
        puVar2 = local_2c;
        piVar1 = *(int **)(DAT_006d3fec + iVar5 * 4);
        local_2c = (undefined4 *)0x5f65a8;
        (**(code **)(*piVar1 + 0x4c))(piVar1,puVar2);
        piVar1 = *(int **)(param_1 + 0x308);
        local_2c = (undefined4 *)0x5f65bb;
        iVar5 = (**(code **)(*piVar1 + 0x11c))();
        local_2c = (undefined4 *)0x5f65c8;
        FUN_00416244(local_6c,iVar5 + -1,0xfc);
        local_2c = local_6c;
        local_30 = (undefined *)0x5f65d9;
        FUN_00416478(local_7c,"nxescudo2");
        puVar2 = local_2c;
        local_2c = (undefined4 *)0x5f65e4;
        iVar5 = FUN_004f77e4(piVar1,local_7c,puVar2);
        local_2c = (undefined4 *)(iVar5 + 8);
        local_30 = (undefined *)0x5f65f2;
        iVar5 = FUN_00405ef4(DAT_006d3fec);
        *local_2c = *(undefined4 *)(DAT_006d3fec + iVar5 * 4);
      }
      local_2c = (undefined4 *)0x5f6650;
      FUN_00405194(&local_80,
                   *(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066b154 + unaff_EBX[iVar4] * 600) * 0x2f8);
      local_2c = local_80;
      piVar1 = *(int **)(param_1 + 0x308);
      local_30 = (undefined *)0x5f6667;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_30 = (undefined *)0x5f6679;
      (**(code **)(*piVar1 + 0x194))(piVar1,2,iVar5 + -1);
      local_30 = (undefined *)0x5f6697;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 8 + unaff_EBX[iVar4] * 600),&local_8c)
      ;
      local_30 = local_8c;
      local_34 = (undefined4 *)&DAT_005f7550;
      uStack_38 = 0x5f66c0;
      FUN_00409dd8(*(undefined4 *)(*(int *)PTR_DAT_0066b154 + 0xc + unaff_EBX[iVar4] * 600),
                   &local_90);
      uStack_38 = local_90;
      uStack_3c = 0x5f66d6;
      FUN_00404c64(&local_88,3);
      uStack_3c = 0x5f66e4;
      FUN_004051d4(&local_84,local_88);
      uStack_3c = local_84;
      piVar1 = *(int **)(param_1 + 0x308);
      uStack_40 = 0x5f66fb;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      uStack_40 = 0x5f670d;
      (**(code **)(*piVar1 + 0x194))(piVar1,3,iVar5 + -1);
      uStack_40 = 0x5f6737;
      FUN_00405194(&local_94,
                   *(int *)PTR_DAT_0066af70 +
                   *(int *)(*(int *)PTR_DAT_0066b154 + 4 + unaff_EBX[iVar4] * 600) * 0x2f8);
      uStack_40 = local_94;
      piVar1 = *(int **)(param_1 + 0x308);
      local_44 = 0x5f6751;
      iVar5 = (**(code **)(*piVar1 + 0x11c))();
      local_44 = 0x5f6763;
      (**(code **)(*piVar1 + 0x194))(piVar1,4,iVar5 + -1);
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + -1;
    } while (puVar6 != (undefined *)0x0);
  }
  switch(*(int *)(PTR_DAT_0066ac78 + 0x88)) {
  case 1:
    local_2c = (undefined4 *)&LAB_005f6813;
    local_30 = (undefined *)*in_FS_OFFSET;
    *in_FS_OFFSET = (int)&local_30;
    local_34 = (undefined4 *)0x5f67e2;
    local_28 = &stack0xfffffffc;
    FUN_00645c68(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d3f90 * 0x294),&local_98)
    ;
    local_34 = (undefined4 *)0x5f67f5;
    FUN_0040526c(&local_98,*(undefined4 *)PTR_DAT_0066aee8);
    local_34 = (undefined4 *)0x5f6809;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_98);
    puVar6 = local_28;
    *in_FS_OFFSET = (int)local_30;
    if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
      local_28 = (undefined *)0x5f684f;
      FUN_00642c50(0x23,&local_9c,puVar6);
      local_28 = (undefined *)0x5f685f;
      FUN_005f5fb4(param_1,0,local_9c);
      if (1 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d3f90 * 0x294)) {
        local_28 = (undefined *)0x5f688b;
        FUN_00642c50(0x24,&local_a0);
        local_28 = (undefined *)0x5f689e;
        FUN_005f5fb4(param_1,0xb,local_a0);
      }
      if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d3f90 * 0x294)) {
        local_28 = (undefined *)0x5f68ca;
        FUN_00642c50(0x25,&local_a4);
        local_28 = (undefined *)0x5f68dd;
        FUN_005f5fb4(param_1,0x16,local_a4);
      }
      if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d3f90 * 0x294)) {
        local_28 = (undefined *)0x5f690d;
        FUN_00642c50(0x26,&local_a8);
        local_28 = (undefined *)0x5f6920;
        FUN_005f5fb4(param_1,0x21,local_a8);
      }
    }
    else {
      local_28 = (undefined *)0x5f6935;
      FUN_00642c50(0x23,&local_ac,puVar6);
      local_28 = (undefined *)0x5f6945;
      FUN_005f5fb4(param_1,0,local_ac);
      local_28 = (undefined *)0x5f6955;
      FUN_00642c50(0x24,&local_b0);
      local_28 = (undefined *)0x5f6968;
      FUN_005f5fb4(param_1,6,local_b0);
      local_2c = (undefined4 *)&LAB_005f69bf;
      local_30 = (undefined *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&local_30;
      local_28 = &stack0xfffffffc;
      if (2 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d3f90 * 0x294)) {
        local_34 = (undefined4 *)0x5f69a2;
        local_28 = &stack0xfffffffc;
        FUN_00642c50(0x25,&local_b4);
        local_34 = (undefined4 *)0x5f69b5;
        FUN_005f5fb4(param_1,0xc,local_b4);
      }
      puVar6 = local_28;
      *in_FS_OFFSET = (int)local_30;
      local_2c = (undefined4 *)&LAB_005f6a23;
      local_30 = (undefined *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&local_30;
      if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + DAT_006d3f90 * 0x294)) {
        local_34 = (undefined4 *)0x5f6a03;
        local_28 = &stack0xfffffffc;
        FUN_00642c50(0x26,&local_b8,puVar6);
        local_34 = (undefined4 *)0x5f6a16;
        FUN_005f5fb4(param_1,0x12,local_b8);
      }
      *in_FS_OFFSET = (int)local_30;
    }
    break;
  case 2:
    local_28 = (undefined *)0x5f6a56;
    FUN_006458c8(*(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x140 + DAT_006d3f90 * 0x294),&local_bc)
    ;
    local_28 = (undefined *)0x5f6a69;
    FUN_0040526c(&local_bc,*(undefined4 *)PTR_DAT_0066aee8);
    local_28 = (undefined *)0x5f6a7d;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_bc);
    break;
  case 4:
  case 6:
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
      local_28 = *(undefined **)(PTR_DAT_0066b3f8 + DAT_006d3f90 * 4 + -4);
      local_2c = (undefined4 *)&DAT_005f7558;
      local_30 = *(undefined **)PTR_DAT_0066aee8;
      local_34 = (undefined4 *)0x5f6ab8;
      FUN_00405330(&local_c0,3);
      local_28 = (undefined *)0x5f6acc;
      FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_c0);
    }
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) {
      if (DAT_006d3f90 == 1) {
        local_28 = (undefined *)0x5f6af7;
        FUN_00642c50(0xdf,&local_c8);
        local_28 = local_c8;
        local_2c = (undefined4 *)&DAT_005f7558;
        local_30 = *(undefined **)PTR_DAT_0066aee8;
        local_34 = (undefined4 *)0x5f6b19;
        FUN_00405330(&local_c4,3);
        local_28 = (undefined *)0x5f6b2d;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_c4);
      }
      else {
        local_28 = (undefined *)0x5f6b3f;
        FUN_00642c50(0xdd,&local_d0);
        local_28 = local_d0;
        local_2c = (undefined4 *)&DAT_005f7558;
        local_30 = *(undefined **)PTR_DAT_0066aee8;
        local_34 = (undefined4 *)0x5f6b61;
        FUN_00405330(&local_cc,3);
        local_28 = (undefined *)0x5f6b75;
        FUN_004e1414(*(undefined4 *)(param_1 + 0x328),local_cc);
      }
    }
    if (((*(int *)(PTR_DAT_0066ac78 + 0x88) != 4) || (*(int *)(PTR_DAT_0066ac78 + 0x194) < 4)) &&
       ((*(int *)(PTR_DAT_0066ac78 + 0x88) != 6 || (*(int *)(PTR_DAT_0066ac78 + 0x1a0) < 4)))) {
      if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 6) && (DAT_006d3f90 == 2)) {
        local_28 = (undefined *)0x5f6be6;
        FUN_00642c50(0x1dd,&local_d4);
        local_28 = (undefined *)0x5f6bf6;
        FUN_0040526c(&local_d4,&DAT_005f7560);
        local_28 = (undefined *)0x5f6c06;
        FUN_005f5fb4(param_1,0,local_d4);
        local_28 = (undefined *)0x5f6c16;
        FUN_00642c50(0x1dd,&local_d8);
        local_28 = (undefined *)0x5f6c26;
        FUN_0040526c(&local_d8,&DAT_005f756c);
        local_28 = (undefined *)0x5f6c39;
        FUN_005f5fb4(param_1,3,local_d8);
        local_28 = (undefined *)0x5f6c49;
        FUN_00642c50(0x1dd,&local_dc);
        local_28 = (undefined *)0x5f6c59;
        FUN_0040526c(&local_dc,&DAT_005f7578);
        local_28 = (undefined *)0x5f6c6c;
        FUN_005f5fb4(param_1,6,local_dc);
        local_28 = (undefined *)0x5f6c7c;
        FUN_00642c50(0x1dd,&local_e0);
        local_28 = (undefined *)0x5f6c8c;
        FUN_0040526c(&local_e0,&DAT_005f7584);
        local_28 = (undefined *)0x5f6c9f;
        FUN_005f5fb4(param_1,9,local_e0);
        local_28 = (undefined *)0x5f6caf;
        FUN_00642c50(0x1dd,&local_e4);
        local_28 = (undefined *)0x5f6cbf;
        FUN_0040526c(&local_e4,&DAT_005f7590);
        local_28 = (undefined *)0x5f6cd2;
        FUN_005f5fb4(param_1,0xc,local_e4);
        local_28 = (undefined *)0x5f6ce2;
        FUN_00642c50(0x1dd,&local_e8);
        local_28 = (undefined *)0x5f6cf2;
        FUN_0040526c(&local_e8,&DAT_005f759c);
        local_28 = (undefined *)0x5f6d05;
        FUN_005f5fb4(param_1,0xf,local_e8);
        local_28 = (undefined *)0x5f6d15;
        FUN_00642c50(0x1dd,&local_ec);
        local_28 = (undefined *)0x5f6d25;
        FUN_0040526c(&local_ec,&DAT_005f75a8);
        local_28 = (undefined *)0x5f6d38;
        FUN_005f5fb4(param_1,0x12,local_ec);
        local_28 = (undefined *)0x5f6d48;
        FUN_00642c50(0x1dd,&local_f0);
        local_28 = (undefined *)0x5f6d58;
        FUN_0040526c(&local_f0,&DAT_005f75b4);
        local_28 = (undefined *)0x5f6d6b;
        FUN_005f5fb4(param_1,0x15,local_f0);
      }
      else if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
        local_28 = (undefined *)0x5f6d8f;
        FUN_00642c50(0x1dd,&local_f4);
        local_28 = (undefined *)0x5f6d9f;
        FUN_0040526c(&local_f4,&DAT_005f7560);
        local_28 = (undefined *)0x5f6daf;
        FUN_005f5fb4(param_1,0,local_f4);
        local_28 = (undefined *)0x5f6dbf;
        FUN_00642c50(0x1dd,&local_f8);
        local_28 = (undefined *)0x5f6dcf;
        FUN_0040526c(&local_f8,&DAT_005f756c);
        local_28 = (undefined *)0x5f6de2;
        FUN_005f5fb4(param_1,3,local_f8);
        local_28 = (undefined *)0x5f6df2;
        FUN_00642c50(0x1dd,&local_fc);
        local_28 = (undefined *)0x5f6e02;
        FUN_0040526c(&local_fc,&DAT_005f7578);
        local_28 = (undefined *)0x5f6e15;
        FUN_005f5fb4(param_1,6,local_fc);
        local_28 = (undefined *)0x5f6e25;
        FUN_00642c50(0x1dd,&local_100);
        local_28 = (undefined *)0x5f6e35;
        FUN_0040526c(&local_100,&DAT_005f7584);
        local_28 = (undefined *)0x5f6e48;
        FUN_005f5fb4(param_1,9,local_100);
        local_28 = (undefined *)0x5f6e58;
        FUN_00642c50(0x1dd,&local_104);
        local_28 = (undefined *)0x5f6e68;
        FUN_0040526c(&local_104,&DAT_005f7590);
        local_28 = (undefined *)0x5f6e7b;
        FUN_005f5fb4(param_1,0xc,local_104);
        local_28 = (undefined *)0x5f6e8b;
        FUN_00642c50(0x1dd,&local_108);
        local_28 = (undefined *)0x5f6e9b;
        FUN_0040526c(&local_108,&DAT_005f759c);
        local_28 = (undefined *)0x5f6eae;
        FUN_005f5fb4(param_1,0xf,local_108);
        local_28 = (undefined *)0x5f6ebe;
        FUN_00642c50(0x1dd,&local_10c);
        local_28 = (undefined *)0x5f6ece;
        FUN_0040526c(&local_10c,&DAT_005f75a8);
        local_28 = (undefined *)0x5f6ee1;
        FUN_005f5fb4(param_1,0x12,local_10c);
        local_28 = (undefined *)0x5f6ef1;
        FUN_00642c50(0x1dd,&local_110);
        local_28 = (undefined *)0x5f6f01;
        FUN_0040526c(&local_110,&DAT_005f75b4);
        local_28 = (undefined *)0x5f6f14;
        FUN_005f5fb4(param_1,0x15,local_110);
      }
    }
    break;
  case 7:
    if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 5) {
      local_28 = (undefined *)0x5f6f3b;
      FUN_00642c50(0x1dd,&local_114);
      local_28 = (undefined *)0x5f6f4b;
      FUN_0040526c(&local_114,&DAT_005f75c0);
      local_28 = (undefined *)0x5f6f5b;
      FUN_005f5fb4(param_1,0,local_114);
      local_28 = (undefined *)0x5f6f6b;
      FUN_00642c50(0x1dd,&local_118);
      local_28 = (undefined *)0x5f6f7b;
      FUN_0040526c(&local_118,&DAT_005f75cc);
      local_28 = (undefined *)0x5f6f8e;
      FUN_005f5fb4(param_1,3,local_118);
      local_28 = (undefined *)0x5f6f9e;
      FUN_00642c50(0x1dd,&local_11c);
      local_28 = (undefined *)0x5f6fae;
      FUN_0040526c(&local_11c,&DAT_005f75d8);
      local_28 = (undefined *)0x5f6fc1;
      FUN_005f5fb4(param_1,6,local_11c);
      local_28 = (undefined *)0x5f6fd1;
      FUN_00642c50(0x1dd,&local_120);
      local_28 = (undefined *)0x5f6fe1;
      FUN_0040526c(&local_120,&DAT_005f75e4);
      local_28 = (undefined *)0x5f6ff4;
      FUN_005f5fb4(param_1,9,local_120);
      local_28 = (undefined *)0x5f7004;
      FUN_00642c50(0x1dd,&local_124);
      local_28 = (undefined *)0x5f7014;
      FUN_0040526c(&local_124,&DAT_005f75f0);
      local_28 = (undefined *)0x5f7027;
      FUN_005f5fb4(param_1,0xc,local_124);
      local_28 = (undefined *)0x5f7037;
      FUN_00642c50(0x1dd,&local_128);
      local_28 = (undefined *)0x5f7047;
      FUN_0040526c(&local_128,&DAT_005f75fc);
      local_28 = (undefined *)0x5f705a;
      FUN_005f5fb4(param_1,0xf,local_128);
      local_28 = (undefined *)0x5f706a;
      FUN_00642c50(0x1dd,&local_12c);
      local_28 = (undefined *)0x5f707a;
      FUN_0040526c(&local_12c,&DAT_005f7608);
      local_28 = (undefined *)0x5f708d;
      FUN_005f5fb4(param_1,0x12,local_12c);
      local_28 = (undefined *)0x5f709d;
      FUN_00642c50(0x1dd,&local_130);
      local_28 = (undefined *)0x5f70ad;
      FUN_0040526c(&local_130,&DAT_005f7614);
      local_28 = (undefined *)0x5f70c0;
      FUN_005f5fb4(param_1,0x15,local_130);
    }
    break;
  case 8:
  case 9:
    if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 5) {
      local_28 = (undefined *)0x5f70e7;
      FUN_00642c50(0x1dd,&local_134);
      local_28 = (undefined *)0x5f70f7;
      FUN_0040526c(&local_134,&DAT_005f75c0);
      local_28 = (undefined *)0x5f7107;
      FUN_005f5fb4(param_1,0,local_134);
      local_28 = (undefined *)0x5f7117;
      FUN_00642c50(0x1dd,&local_138);
      local_28 = (undefined *)0x5f7127;
      FUN_0040526c(&local_138,&DAT_005f75cc);
      local_28 = (undefined *)0x5f713a;
      FUN_005f5fb4(param_1,3,local_138);
      local_28 = (undefined *)0x5f714a;
      FUN_00642c50(0x1dd,&local_13c);
      local_28 = (undefined *)0x5f715a;
      FUN_0040526c(&local_13c,&DAT_005f75d8);
      local_28 = (undefined *)0x5f716d;
      FUN_005f5fb4(param_1,6,local_13c);
      if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 9) {
        local_28 = (undefined *)0x5f718b;
        FUN_00642c50(0x1dd,&local_140);
        local_28 = (undefined *)0x5f719b;
        FUN_0040526c(&local_140,&DAT_005f75e4);
        local_28 = (undefined *)0x5f71ae;
        FUN_005f5fb4(param_1,9,local_140);
      }
    }
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    if (*(int *)(PTR_DAT_0066b40c +
                *(int *)PTR_DAT_0066b080 * 4 +
                *(int *)(PTR_DAT_0066ae98 + DAT_006d3ff4 * 0x568 + 0x530) * 0x50 + -0x54) < 0) {
      local_28 = (undefined *)0x5f723c;
      iVar4 = FUN_00402c38();
      local_28 = (undefined *)0x5f724d;
      FUN_005f5fb4(param_1,0,&DAT_005f7620);
      if (*(int *)PTR_DAT_0066b080 < 0xb) {
        if (1 < *(int *)(PTR_DAT_0066ae98 + DAT_006d3ff4 * 0x568 + 0x510)) {
          local_28 = (undefined *)0x5f7281;
          FUN_005f5fb4(param_1,iVar4 + 1,&DAT_005f763c);
        }
        if (2 < *(int *)(PTR_DAT_0066ae98 + DAT_006d3ff4 * 0x568 + 0x510)) {
          local_28 = (undefined *)0x5f72ab;
          FUN_005f5fb4(param_1,iVar4 + 5,&DAT_005f7658);
        }
        if (*(int *)(PTR_DAT_0066ae98 + DAT_006d3ff4 * 0x568 + 0x510) == 4) {
          local_28 = (undefined *)0x5f72d5;
          FUN_005f5fb4(param_1,iVar4 + 9,&DAT_005f7674);
        }
      }
      local_28 = (undefined *)0x5f72eb;
      (**(code **)(**(int **)(param_1 + 0x308) + 0x1b0))(*(int **)(param_1 + 0x308),1);
    }
    else {
      local_28 = (undefined *)0x5f7209;
      (**(code **)(**(int **)(param_1 + 0x308) + 0x1b0))(*(int **)(param_1 + 0x308),0);
    }
  }
  local_2c = (undefined4 *)&LAB_005f730d;
  local_30 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  local_34 = (undefined4 *)0x5f7303;
  local_28 = &stack0xfffffffc;
  FUN_0040fe60(PTR_DAT_0066b3b4);
  puVar2 = local_1c;
  *in_FS_OFFSET = (int)local_30;
  *in_FS_OFFSET = local_24;
  local_1c = (undefined4 *)&LAB_005f73d7;
  local_20 = (undefined1 *)0x5f7334;
  FUN_00405008(&local_140,0x2c,puVar2);
  local_20 = (undefined1 *)0x5f7344;
  FUN_004048f8(&local_90,3);
  local_20 = (undefined1 *)0x5f7351;
  FUN_00405008(&local_84,2);
  local_20 = (undefined1 *)0x5f7364;
  FUN_00405744(local_7c,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f7371;
  FUN_004048f8(&local_5c,2);
  local_20 = (undefined1 *)0x5f7384;
  FUN_00405744(local_54,PTR_DAT_004010f8,2);
  local_20 = (undefined1 *)0x5f7391;
  FUN_004048f8(&local_34,3);
  local_20 = (undefined1 *)0x5f7399;
  FUN_00404ff0(&local_28);
  local_20 = (undefined1 *)0x5f73a1;
  FUN_004048d4(&local_24);
  local_20 = (undefined1 *)0x5f73a9;
  FUN_00404ff0(&local_20);
  local_20 = (undefined1 *)0x5f73b6;
  FUN_004048f8(&local_1c,2);
  local_20 = (undefined1 *)0x5f73be;
  FUN_00404ff0(&stack0xffffffec);
  local_20 = (undefined1 *)0x5f73cc;
  FUN_004061c8(&stack0xfffffff0,PTR_DAT_005f6084);
  return;
}

