// Address: 004240ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004240ec(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_004242e6;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  FUN_00411d38(param_2);
  uVar4 = FUN_00421f74(local_8);
  switch(uVar4 & 0x7f) {
  case 0:
  case 0xd:
    cVar2 = FUN_004239d4(local_8);
    if (cVar2 != '\r') {
      FUN_004190c4(param_2);
    }
    break;
  default:
    FUN_0040e42c(PTR_DAT_0041b3ac,1,PTR_PTR_0066b614);
    FUN_00404250();
    break;
  case 2:
    cVar2 = FUN_00422ae4(local_8);
    FUN_00416244(param_2,(int)cVar2,0xff);
    break;
  case 3:
    sVar3 = FUN_00422ae4(local_8);
    FUN_00416244(param_2,(int)sVar3,0xfe);
    break;
  case 4:
    uVar5 = FUN_00422ae4(local_8);
    FUN_00416244(param_2,uVar5,0xfc);
    break;
  case 5:
    FUN_004228c8(local_8);
    FUN_0041643c(param_2);
    break;
  case 6:
  case 0xc:
    FUN_00423834(local_8,&local_c);
    FUN_00416478(param_2,local_c);
    break;
  case 8:
  case 9:
    cVar2 = FUN_004239d4(local_8);
    FUN_00416414(param_2,cVar2 == '\t');
    break;
  case 10:
    FUN_00423f24(&local_20);
    FUN_00412164(param_2,&local_20,&stack0xfffffffc);
    break;
  case 0xf:
    FUN_0042290c(local_8);
    FUN_0041643c(param_2);
    break;
  case 0x10:
    FUN_00422950(local_8);
    FUN_00416464(param_2);
    break;
  case 0x11:
    FUN_004229a0(local_8);
    FUN_00416450(param_2);
    break;
  case 0x12:
  case 0x14:
    FUN_004238f0(local_8,&local_10);
    FUN_004164f4(param_2,local_10);
    break;
  case 0x13:
    FUN_00422b50(local_8);
    FUN_00416340(param_2);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004242ed;
  puStack_2c = (undefined1 *)0x4242d5;
  FUN_00411d4c(&local_20,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x4242dd;
  FUN_00404ff0(&local_10);
  puStack_2c = (undefined1 *)0x4242e5;
  FUN_004048d4(&local_c);
  return;
}

