// Address: 004153cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004153cc(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 fVar6;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = &stack0xfffffffc;
  iVar5 = 0xf;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1c = &LAB_00415903;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  uVar1 = *param_2;
  switch(uVar1) {
  case 0:
    local_24._0_2_ = 0x5460;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_004048d4(param_1);
    break;
  case 1:
    local_18 = &stack0xfffffffc;
    if (DAT_00662450 != '\0') {
      local_24._0_2_ = 0x547b;
      local_24._2_2_ = 0x41;
      local_18 = &stack0xfffffffc;
      FUN_00411500(1,0x100);
    }
    local_24._0_2_ = 0x5488;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,DAT_00662454);
    break;
  case 2:
    local_24._0_2_ = 0x5499;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_00409dd8((int)(short)param_2[4],&local_8);
    local_24._0_2_ = 0x54a3;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,local_8);
    break;
  case 3:
    local_24._0_2_ = 0x54b3;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_00409dd8(*(undefined4 *)(param_2 + 4),&local_c);
    local_24._0_2_ = 0x54bd;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,local_c);
    break;
  case 4:
    fVar6 = (float10)*(float *)(param_2 + 4);
    uStack_2c = SUB104(fVar6,0);
    local_28 = (undefined4)((unkuint10)fVar6 >> 0x20);
    local_24._0_2_ = (undefined2)((unkuint10)fVar6 >> 0x40);
    uStack_30 = 0x4154d4;
    local_18 = &stack0xfffffffc;
    FUN_0040bdc0(&stack0xfffffff0);
    local_24._0_2_ = 0x54de;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,unaff_EBX);
    break;
  case 5:
    fVar6 = (float10)*(double *)(param_2 + 4);
    uStack_2c = SUB104(fVar6,0);
    local_28 = (undefined4)((unkuint10)fVar6 >> 0x20);
    local_24._0_2_ = (undefined2)((unkuint10)fVar6 >> 0x40);
    uStack_30 = 0x4154f5;
    local_18 = &stack0xfffffffc;
    FUN_0040bdc0(&stack0xffffffec);
    local_24._0_2_ = 0x54ff;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,unaff_ESI);
    break;
  case 6:
    local_24._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_24._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x415512;
    local_18 = &stack0xfffffffc;
    FUN_004150e4(&local_18);
    local_24._0_2_ = 0x551c;
    local_24._2_2_ = 0x41;
    FUN_00404b6c(param_1,local_18);
    break;
  case 7:
    local_24._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_24._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x41552f;
    local_18 = &stack0xfffffffc;
    FUN_0041511c(&local_1c);
    local_24._0_2_ = 0x5539;
    local_24._2_2_ = 0x41;
    FUN_00404b6c(param_1,local_1c);
    break;
  case 8:
    local_24 = &local_20;
    local_28 = 0x41554d;
    local_18 = &stack0xfffffffc;
    FUN_00405158(&local_24,*(undefined4 *)(param_2 + 4));
    local_28 = 0x41555f;
    FUN_004053fc(local_24,1,0x7fffffff);
    local_24._0_2_ = 0x5569;
    local_24._2_2_ = 0x41;
    FUN_00404b6c(param_1,local_20);
    break;
  case 9:
  case 0xd:
    local_24._0_2_ = 0x5631;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_00415218(param_2,&local_40);
    local_24._0_2_ = 0x563b;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,local_40);
    break;
  default:
    if (uVar1 == 0x100) {
      local_24._0_2_ = 0x565a;
      local_24._2_2_ = 0x41;
      local_18 = &stack0xfffffffc;
      FUN_00404928(param_1,*(undefined4 *)(param_2 + 4));
    }
    else if (uVar1 == 0x101) {
      local_24._0_2_ = 0x5669;
      local_24._2_2_ = 0x41;
      local_18 = &stack0xfffffffc;
      FUN_004152e4(param_2,&local_44);
      local_24._0_2_ = 0x5673;
      local_24._2_2_ = 0x41;
      FUN_00404928(param_1,local_44);
    }
    else if ((uVar1 & 0x4000) == 0) {
      local_24._0_2_ = 0x5893;
      local_24._2_2_ = 0x41;
      local_18 = &stack0xfffffffc;
      uVar4 = FUN_004048d4(param_1);
      local_24._0_2_ = 0x589c;
      local_24._2_2_ = 0x41;
      cVar3 = FUN_00415348(param_2,uVar4);
      if (cVar3 == '\0') {
        local_24._0_2_ = 0x58aa;
        local_24._2_2_ = 0x41;
        FUN_00415218(param_2,&local_7c);
        local_24._0_2_ = 0x58b4;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_7c);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        local_24._0_2_ = 0x5880;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00415218(param_2,&local_78);
        local_24._0_2_ = 0x588a;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_78);
        break;
      case 2:
        local_24._0_2_ = 0x56fb;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00409dd8((int)**(short **)(param_2 + 4),&local_48);
        local_24._0_2_ = 0x5705;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_48);
        break;
      case 3:
        local_24._0_2_ = 0x5717;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00409dd8(**(undefined4 **)(param_2 + 4),&local_4c);
        local_24._0_2_ = 0x5721;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_4c);
        break;
      case 4:
        fVar6 = (float10)**(float **)(param_2 + 4);
        uStack_2c = SUB104(fVar6,0);
        local_28 = (undefined4)((unkuint10)fVar6 >> 0x20);
        local_24._0_2_ = (undefined2)((unkuint10)fVar6 >> 0x40);
        uStack_30 = 0x41573a;
        local_18 = &stack0xfffffffc;
        FUN_0040bdc0(&local_50);
        local_24._0_2_ = 0x5744;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_50);
        break;
      case 5:
        fVar6 = (float10)**(double **)(param_2 + 4);
        uStack_2c = SUB104(fVar6,0);
        local_28 = (undefined4)((unkuint10)fVar6 >> 0x20);
        local_24._0_2_ = (undefined2)((unkuint10)fVar6 >> 0x40);
        uStack_30 = 0x41575d;
        local_18 = &stack0xfffffffc;
        FUN_0040bdc0(&local_54);
        local_24._0_2_ = 0x5767;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_54);
        break;
      case 6:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_24._0_2_ = (undefined2)uVar4;
        local_24._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
        local_28 = **(undefined4 **)(param_2 + 4);
        uStack_2c = 0x41577c;
        local_18 = &stack0xfffffffc;
        FUN_004150e4(&local_58);
        local_24._0_2_ = 0x5786;
        local_24._2_2_ = 0x41;
        FUN_00404b6c(param_1,local_58);
        break;
      case 7:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_24._0_2_ = (undefined2)uVar4;
        local_24._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
        local_28 = **(undefined4 **)(param_2 + 4);
        uStack_2c = 0x41579b;
        local_18 = &stack0xfffffffc;
        FUN_0041511c(&local_5c);
        local_24._0_2_ = 0x57a5;
        local_24._2_2_ = 0x41;
        FUN_00404b6c(param_1,local_5c);
        break;
      case 8:
        local_24._0_2_ = 0x57b6;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00404b0c(param_1,**(undefined4 **)(param_2 + 4));
        break;
      case 0xb:
        local_24._0_2_ = 0x57c9;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00415154(CONCAT22((short)((uint)*(undefined2 **)(param_2 + 4) >> 0x10),
                              **(undefined2 **)(param_2 + 4)),&local_60);
        local_24._0_2_ = 0x57d3;
        local_24._2_2_ = 0x41;
        FUN_00404b6c(param_1,local_60);
        break;
      case 0xc:
        local_24._0_2_ = 0x5874;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_004153cc(param_1,*(undefined4 *)(param_2 + 4));
        break;
      case 0x10:
        local_24._0_2_ = 0x57e6;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00409dd8((int)**(char **)(param_2 + 4),&local_64);
        local_24._0_2_ = 0x57f0;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_64);
        break;
      case 0x11:
        local_24._0_2_ = 0x5803;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00409dd8(**(undefined1 **)(param_2 + 4),&local_68);
        local_24._0_2_ = 0x580d;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_68);
        break;
      case 0x12:
        local_24._0_2_ = 0x5820;
        local_24._2_2_ = 0x41;
        local_18 = &stack0xfffffffc;
        FUN_00409dd8(**(undefined2 **)(param_2 + 4),&local_6c);
        local_24._0_2_ = 0x582a;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_6c);
        break;
      case 0x13:
        local_28 = **(undefined4 **)(param_2 + 4);
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        uStack_2c = 0x415840;
        local_18 = &stack0xfffffffc;
        FUN_00409fa8(&local_70);
        local_24._0_2_ = 0x584a;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_70);
        break;
      case 0x14:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_24._0_2_ = (undefined2)uVar4;
        local_24._2_2_ = (undefined2)((uint)uVar4 >> 0x10);
        local_28 = **(undefined4 **)(param_2 + 4);
        uStack_2c = 0x41585c;
        local_18 = &stack0xfffffffc;
        FUN_00409fa8(&local_74);
        local_24._0_2_ = 0x5866;
        local_24._2_2_ = 0x41;
        FUN_00404928(param_1,local_74);
      }
    }
    break;
  case 0xb:
    local_24._0_2_ = 0x557a;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_00415154(param_2[4],&local_28);
    local_24._0_2_ = 0x5584;
    local_24._2_2_ = 0x41;
    FUN_00404b6c(param_1,local_28);
    break;
  case 0xc:
    local_24._0_2_ = 0x5622;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_004153cc(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_24._0_2_ = 0x5595;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_00409dd8((int)(char)param_2[4],&uStack_2c);
    local_24._0_2_ = 0x559f;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,uStack_2c);
    break;
  case 0x11:
    local_24._0_2_ = 0x55b1;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_00409dd8((char)param_2[4],&uStack_30);
    local_24._0_2_ = 0x55bb;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,uStack_30);
    break;
  case 0x12:
    local_24._0_2_ = 0x55cc;
    local_24._2_2_ = 0x41;
    local_18 = &stack0xfffffffc;
    FUN_00409dd8(param_2[4],&local_34);
    local_24._0_2_ = 0x55d6;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,local_34);
    break;
  case 0x13:
    local_28 = *(undefined4 *)(param_2 + 4);
    local_24._0_2_ = 0;
    local_24._2_2_ = 0;
    uStack_2c = 0x4155ea;
    local_18 = &stack0xfffffffc;
    FUN_00409fa8(&local_38);
    local_24._0_2_ = 0x55f4;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,local_38);
    break;
  case 0x14:
    local_24._0_2_ = (undefined2)*(undefined4 *)(param_2 + 6);
    local_24._2_2_ = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_2c = 0x415607;
    FUN_00409fa8(&local_3c);
    local_24._0_2_ = 0x5611;
    local_24._2_2_ = 0x41;
    FUN_00404928(param_1,local_3c);
  }
  puVar2 = local_18;
  *in_FS_OFFSET = local_20;
  local_18 = &LAB_0041590a;
  local_1c = (undefined1 *)0x4158ce;
  FUN_004048f8(&local_7c,7,puVar2);
  local_1c = (undefined1 *)0x4158db;
  FUN_00405008(&local_60,3);
  local_1c = (undefined1 *)0x4158e8;
  FUN_004048f8(&local_54,0xb);
  local_1c = (undefined1 *)0x4158f5;
  FUN_00405008(&local_28,5);
  local_1c = (undefined1 *)0x415902;
  FUN_004048f8(&stack0xffffffec,4);
  return;
}

