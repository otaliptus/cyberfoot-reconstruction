// Address: 00415af4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00415af4(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 fVar5;
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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = &stack0xfffffffc;
  local_10 = 0xe;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_00416046;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uVar1 = *param_2;
  switch(uVar1) {
  case 0:
    local_28 = 0x5b89;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00404ff0(param_1);
    break;
  case 1:
    local_1c = &stack0xfffffffc;
    if (DAT_00662450 != '\0') {
      local_28 = 0x5ba4;
      uStack_26 = 0x41;
      local_1c = &stack0xfffffffc;
      FUN_00411500(1,8);
    }
    local_28 = 0x5bb1;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,DAT_00662454);
    break;
  case 2:
    local_28 = 0x5bc2;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00409dd8((int)(short)param_2[4],&local_8);
    local_28 = 0x5bcc;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,local_8);
    break;
  case 3:
    local_28 = 0x5bdc;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00409dd8(*(undefined4 *)(param_2 + 4),&local_c);
    local_28 = 0x5be6;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,local_c);
    break;
  case 4:
    fVar5 = (float10)*(float *)(param_2 + 4);
    uStack_30 = SUB104(fVar5,0);
    local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_28 = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_34 = 0x415bfd;
    local_1c = &stack0xfffffffc;
    FUN_0040bdc0(&local_10);
    local_28 = 0x5c07;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,local_10);
    break;
  case 5:
    fVar5 = (float10)*(double *)(param_2 + 4);
    uStack_30 = SUB104(fVar5,0);
    local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
    local_28 = (undefined2)((unkuint10)fVar5 >> 0x40);
    uStack_34 = 0x415c1e;
    local_1c = &stack0xfffffffc;
    FUN_0040bdc0(&stack0xffffffec);
    local_28 = 0x5c28;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,unaff_EBX);
    break;
  case 6:
    local_28 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_26 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x415c3b;
    local_1c = &stack0xfffffffc;
    FUN_004150e4(&stack0xffffffe8);
    local_28 = 0x5c45;
    uStack_26 = 0x41;
    FUN_0040502c(param_1,unaff_ESI);
    break;
  case 7:
    local_28 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_26 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x415c58;
    local_1c = &stack0xfffffffc;
    FUN_0041511c(&local_1c);
    local_28 = 0x5c62;
    uStack_26 = 0x41;
    FUN_0040502c(param_1,local_1c);
    break;
  case 8:
    local_28 = (undefined2)param_1;
    uStack_26 = (undefined2)((uint)param_1 >> 0x10);
    local_2c = 0x415c73;
    local_1c = &stack0xfffffffc;
    FUN_00405158(&local_20,*(undefined4 *)(param_2 + 4));
    local_2c = 0x415c85;
    FUN_004053fc(local_20,1,0x7fffffff);
    break;
  case 9:
  case 0xd:
    local_28 = 0x5d4d;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00415910(param_2,&local_3c);
    local_28 = 0x5d57;
    uStack_26 = 0x41;
    FUN_0040502c(param_1,local_3c);
    break;
  default:
    if (uVar1 == 0x100) {
      local_28 = 0x5d76;
      uStack_26 = 0x41;
      local_1c = &stack0xfffffffc;
      FUN_004051d4(param_1,*(undefined4 *)(param_2 + 4));
    }
    else if (uVar1 == 0x101) {
      local_28 = 0x5d85;
      uStack_26 = 0x41;
      local_1c = &stack0xfffffffc;
      FUN_004159c8(param_2,&local_40);
      local_28 = 0x5d8f;
      uStack_26 = 0x41;
      FUN_0040502c(param_1,local_40);
    }
    else if ((uVar1 & 0x4000) == 0) {
      local_28 = 0x5faf;
      uStack_26 = 0x41;
      local_1c = &stack0xfffffffc;
      uVar4 = FUN_00404ff0(param_1);
      local_28 = 0x5fb8;
      uStack_26 = 0x41;
      cVar3 = FUN_00415a2c(param_2,uVar4);
      if (cVar3 == '\0') {
        local_28 = 0x5fc6;
        uStack_26 = 0x41;
        FUN_00415910(param_2,&local_78);
        local_28 = 0x5fd0;
        uStack_26 = 0x41;
        FUN_0040502c(param_1,local_78);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        local_28 = 0x5f9c;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00415910(param_2,&local_74);
        local_28 = 0x5fa6;
        uStack_26 = 0x41;
        FUN_0040502c(param_1,local_74);
        break;
      case 2:
        local_28 = 0x5e17;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00409dd8((int)**(short **)(param_2 + 4),&local_44);
        local_28 = 0x5e21;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_44);
        break;
      case 3:
        local_28 = 0x5e33;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00409dd8(**(undefined4 **)(param_2 + 4),&local_48);
        local_28 = 0x5e3d;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_48);
        break;
      case 4:
        fVar5 = (float10)**(float **)(param_2 + 4);
        uStack_30 = SUB104(fVar5,0);
        local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_28 = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_34 = 0x415e56;
        local_1c = &stack0xfffffffc;
        FUN_0040bdc0(&local_4c);
        local_28 = 0x5e60;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_4c);
        break;
      case 5:
        fVar5 = (float10)**(double **)(param_2 + 4);
        uStack_30 = SUB104(fVar5,0);
        local_2c = (undefined4)((unkuint10)fVar5 >> 0x20);
        local_28 = (undefined2)((unkuint10)fVar5 >> 0x40);
        uStack_34 = 0x415e79;
        local_1c = &stack0xfffffffc;
        FUN_0040bdc0(&local_50);
        local_28 = 0x5e83;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_50);
        break;
      case 6:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_28 = (undefined2)uVar4;
        uStack_26 = (undefined2)((uint)uVar4 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x415e98;
        local_1c = &stack0xfffffffc;
        FUN_004150e4(&local_54);
        local_28 = 0x5ea2;
        uStack_26 = 0x41;
        FUN_0040502c(param_1,local_54);
        break;
      case 7:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_28 = (undefined2)uVar4;
        uStack_26 = (undefined2)((uint)uVar4 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x415eb7;
        local_1c = &stack0xfffffffc;
        FUN_0041511c(&local_58);
        local_28 = 0x5ec1;
        uStack_26 = 0x41;
        FUN_0040502c(param_1,local_58);
        break;
      case 8:
        local_28 = 0x5ed2;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00405158(param_1,**(undefined4 **)(param_2 + 4));
        break;
      case 0xb:
        local_28 = 0x5ee5;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00415154(CONCAT22((short)((uint)*(undefined2 **)(param_2 + 4) >> 0x10),
                              **(undefined2 **)(param_2 + 4)),&local_5c);
        local_28 = 0x5eef;
        uStack_26 = 0x41;
        FUN_0040502c(param_1,local_5c);
        break;
      case 0xc:
        local_28 = 0x5f90;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00415af4(param_1,*(undefined4 *)(param_2 + 4));
        break;
      case 0x10:
        local_28 = 0x5f02;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00409dd8((int)**(char **)(param_2 + 4),&local_60);
        local_28 = 0x5f0c;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_60);
        break;
      case 0x11:
        local_28 = 0x5f1f;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00409dd8(**(undefined1 **)(param_2 + 4),&local_64);
        local_28 = 0x5f29;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_64);
        break;
      case 0x12:
        local_28 = 0x5f3c;
        uStack_26 = 0x41;
        local_1c = &stack0xfffffffc;
        FUN_00409dd8(**(undefined2 **)(param_2 + 4),&local_68);
        local_28 = 0x5f46;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_68);
        break;
      case 0x13:
        local_2c = **(undefined4 **)(param_2 + 4);
        local_28 = 0;
        uStack_26 = 0;
        uStack_30 = 0x415f5c;
        local_1c = &stack0xfffffffc;
        FUN_00409fa8(&local_6c);
        local_28 = 0x5f66;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_6c);
        break;
      case 0x14:
        uVar4 = (*(undefined4 **)(param_2 + 4))[1];
        local_28 = (undefined2)uVar4;
        uStack_26 = (undefined2)((uint)uVar4 >> 0x10);
        local_2c = **(undefined4 **)(param_2 + 4);
        uStack_30 = 0x415f78;
        local_1c = &stack0xfffffffc;
        FUN_00409fa8(&local_70);
        local_28 = 0x5f82;
        uStack_26 = 0x41;
        FUN_004051d4(param_1,local_70);
      }
    }
    break;
  case 0xb:
    local_28 = 0x5c96;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00415154(param_2[4],&local_24);
    local_28 = 0x5ca0;
    uStack_26 = 0x41;
    FUN_0040502c(param_1,local_24);
    break;
  case 0xc:
    local_28 = 0x5d3e;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00415af4(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    local_28 = 0x5cb1;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00409dd8((int)(char)param_2[4],&local_28);
    uVar4 = CONCAT22(uStack_26,local_28);
    local_28 = 0x5cbb;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,uVar4);
    break;
  case 0x11:
    local_28 = 0x5ccd;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00409dd8((char)param_2[4],&local_2c);
    local_28 = 0x5cd7;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,local_2c);
    break;
  case 0x12:
    local_28 = 0x5ce8;
    uStack_26 = 0x41;
    local_1c = &stack0xfffffffc;
    FUN_00409dd8(param_2[4],&uStack_30);
    local_28 = 0x5cf2;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,uStack_30);
    break;
  case 0x13:
    local_2c = *(undefined4 *)(param_2 + 4);
    local_28 = 0;
    uStack_26 = 0;
    uStack_30 = 0x415d06;
    local_1c = &stack0xfffffffc;
    FUN_00409fa8(&uStack_34);
    local_28 = 0x5d10;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,uStack_34);
    break;
  case 0x14:
    local_28 = (undefined2)*(undefined4 *)(param_2 + 6);
    uStack_26 = (undefined2)((uint)*(undefined4 *)(param_2 + 6) >> 0x10);
    local_2c = *(undefined4 *)(param_2 + 4);
    uStack_30 = 0x415d23;
    FUN_00409fa8(&local_38);
    local_28 = 0x5d2d;
    uStack_26 = 0x41;
    FUN_004051d4(param_1,local_38);
  }
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0041604d;
  local_20 = (undefined1 *)0x415fea;
  FUN_00405008(&local_78,2,puVar2);
  local_20 = (undefined1 *)0x415ff7;
  FUN_004048f8(&local_70,5);
  local_20 = (undefined1 *)0x416004;
  FUN_00405008(&local_5c,3);
  local_20 = (undefined1 *)0x416011;
  FUN_004048f8(&local_50,4);
  local_20 = (undefined1 *)0x41601e;
  FUN_00405008(&local_40,2);
  local_20 = (undefined1 *)0x41602b;
  FUN_004048f8(&local_38,5);
  local_20 = (undefined1 *)0x416038;
  FUN_00405008(&local_24,4);
  local_20 = (undefined1 *)0x416045;
  FUN_004048f8(&stack0xffffffec,4);
  return;
}

