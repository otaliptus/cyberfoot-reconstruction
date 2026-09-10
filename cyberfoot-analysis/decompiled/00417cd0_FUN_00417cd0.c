// Address: 00417cd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00417cd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int iVar7;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 6;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_00418012;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  puStack_30 = (undefined4 *)0x417d0a;
  local_8 = param_1;
  FUN_004061c8(&local_c,PTR_DAT_0040129c);
  puStack_30 = (undefined4 *)0x417d18;
  FUN_004061c8(&local_10,PTR_DAT_0040129c);
  puStack_30 = (undefined4 *)0x417d20;
  FUN_00411d38(local_8);
  puStack_30 = (undefined4 *)0x417d29;
  iVar3 = FUN_00417c88(0);
  iVar7 = iVar3;
  if (iVar3 == 0x100) {
    iVar7 = 8;
  }
  puStack_30 = (undefined4 *)0x417d4b;
  iVar4 = FUN_00417ae8(0);
  if (1 < iVar4) {
    puStack_30 = (undefined4 *)0x417d57;
    cVar2 = FUN_00417b08(param_2,0);
    if (cVar2 == '\0') {
      *in_FS_OFFSET = local_2c;
      puStack_24 = &LAB_00418019;
      puStack_28 = (undefined1 *)0x417ffe;
      FUN_00405744(&local_3c,PTR_DAT_004010f8,2);
      puStack_28 = (undefined1 *)0x418011;
      FUN_00405744(&local_14,PTR_DAT_0040129c,3);
      return;
    }
  }
  puStack_30 = (undefined4 *)0x417d6b;
  FUN_00417c30(param_2,0,&local_c);
  puStack_30 = (undefined4 *)0x417d77;
  FUN_00417b70(param_2,0,&local_10);
  puStack_30 = (undefined4 *)0x417d88;
  FUN_004060b4(local_10,PTR_DAT_0040129c,&local_14);
  puStack_30 = &local_3c;
  puStack_34 = (undefined1 *)0x417d94;
  uVar5 = FUN_00405ef4(local_c);
  puStack_34 = (undefined1 *)0x417da2;
  FUN_00417628(local_c,uVar5,CONCAT22(extraout_var,(short)iVar7));
  puStack_30 = (undefined4 *)0x417dad;
  FUN_00412164(local_8,&local_3c);
  puStack_30 = (undefined4 *)0x417db5;
  FUN_00417768(local_8);
  puStack_34 = &LAB_00417fd7;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = (undefined4 *)&stack0xfffffffc;
  do {
    local_3c = 0;
    uVar5 = FUN_00405ef4(local_14);
    psVar6 = (short *)FUN_00417a8c(param_2,local_14,uVar5);
    if (psVar6 != (short *)0x0) {
      if (iVar3 < 0xc) {
        if (iVar3 == 0xb) {
          local_3c = 0x417f1c;
          FUN_00416414(&local_2c,*psVar6 != 0);
        }
        else {
          switch(iVar3) {
          default:
LAB_00417f8f:
            local_3c = 0x417f97;
            FUN_00411d38(&local_2c);
            break;
          case 2:
            local_3c = 0x417e89;
            FUN_00416244(&local_2c,(int)*psVar6,0xfe);
            break;
          case 3:
            local_3c = 0x417e9a;
            FUN_00416244(&local_2c,*(undefined4 *)psVar6,0xfc);
            break;
          case 4:
            local_3c = 0x417ea9;
            FUN_0041643c(&local_2c);
            break;
          case 5:
            local_3c = 0x417eb8;
            FUN_0041643c(&local_2c);
            break;
          case 6:
            local_3c = 0x417ec7;
            FUN_00416464(&local_2c);
            break;
          case 7:
            local_3c = 0x417ed6;
            FUN_0041643c(&local_2c);
            break;
          case 8:
            local_3c = 0x417ee5;
            FUN_004164f4(&local_2c,*(undefined4 *)psVar6);
            break;
          case 9:
            local_3c = 0x417ef4;
            FUN_00416558(&local_2c,*(undefined4 *)psVar6);
            break;
          case 10:
            local_3c = 0x417f05;
            FUN_00416244(&local_2c,*(undefined4 *)psVar6,0xfc);
          }
        }
      }
      else if (iVar3 < 0x13) {
        if (iVar3 == 0x12) {
          local_3c = 0x417f62;
          FUN_00416244(&local_2c,*psVar6,2);
        }
        else if (iVar3 == 0xc) {
          local_3c = 0x417f28;
          FUN_00412164(&local_2c,psVar6);
        }
        else if (iVar3 == 0xd) {
          local_3c = 0x417f34;
          FUN_0041652c(&local_2c,*(undefined4 *)psVar6);
        }
        else if (iVar3 == 0x10) {
          local_3c = 0x417f43;
          FUN_00416244(&local_2c,(int)(char)*psVar6,0xff);
        }
        else {
          if (iVar3 != 0x11) goto LAB_00417f8f;
          local_3c = 0x417f53;
          FUN_00416244(&local_2c,(char)*psVar6,1);
        }
      }
      else if (iVar3 == 0x13) {
        local_3c = 0x417f70;
        FUN_00416244(&local_2c,*(undefined4 *)psVar6,4);
      }
      else if (iVar3 == 0x14) {
        local_3c = *(undefined4 *)(psVar6 + 2);
        FUN_00416340(&local_2c);
      }
      else {
        if (iVar3 != 0x100) goto LAB_00417f8f;
        local_3c = 0x417f8d;
        FUN_00416478(&local_2c,*(undefined4 *)psVar6);
      }
      local_3c = 0x417f9f;
      local_3c = FUN_00405ef4(local_14);
      FUN_00417a64(local_8,&local_2c,local_14);
    }
    local_3c = 0x417fb9;
    cVar2 = FUN_00417bc4(&local_14,local_10);
    puVar1 = puStack_30;
    if (cVar2 == '\0') {
      *in_FS_OFFSET = uStack_38;
      puStack_30 = (undefined4 *)0x417fde;
      puStack_34 = (undefined1 *)0x417fd6;
      FUN_00417788(local_8,uStack_38,puVar1);
      return;
    }
  } while( true );
}

