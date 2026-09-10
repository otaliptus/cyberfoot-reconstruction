// Address: 0041220c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041220c(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004123d5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  switch(*param_2 & 0xbfff) {
  default:
    if ((*param_2 & 0x2000) == 0) {
      puStack_14 = &stack0xfffffffc;
      FUN_004121d8(param_1,param_2);
    }
    else {
      puStack_14 = &stack0xfffffffc;
      FUN_00411ee4(param_1,param_2,&LAB_004121d0);
    }
    break;
  case 2:
    puStack_14 = &stack0xfffffffc;
    FUN_00416244(param_1,(int)**(short **)(param_2 + 4),0xfe);
    break;
  case 3:
    puStack_14 = &stack0xfffffffc;
    FUN_00416244(param_1,**(undefined4 **)(param_2 + 4),0xfc);
    break;
  case 4:
    puStack_14 = &stack0xfffffffc;
    FUN_0041643c(param_1);
    break;
  case 5:
    puStack_14 = &stack0xfffffffc;
    FUN_0041643c(param_1);
    break;
  case 6:
    puStack_14 = &stack0xfffffffc;
    FUN_00416464(param_1);
    break;
  case 7:
    puStack_14 = &stack0xfffffffc;
    FUN_0041643c(param_1);
    break;
  case 8:
    puStack_14 = &stack0xfffffffc;
    FUN_004121c8(param_2,&local_8);
    FUN_004164f4(param_1,local_8);
    break;
  case 9:
  case 0xd:
    puStack_14 = &stack0xfffffffc;
    FUN_004121a8(param_1,param_2);
    break;
  case 0xb:
    puStack_14 = &stack0xfffffffc;
    FUN_00416414(param_1,**(short **)(param_2 + 4) != 0);
    break;
  case 0xc:
    puStack_14 = &stack0xfffffffc;
    FUN_004123e4(param_1,*(undefined4 *)(param_2 + 4));
    break;
  case 0x10:
    puStack_14 = &stack0xfffffffc;
    FUN_00416244(param_1,(int)**(char **)(param_2 + 4),0xff);
    break;
  case 0x11:
    puStack_14 = &stack0xfffffffc;
    FUN_00416244(param_1,**(undefined1 **)(param_2 + 4),1);
    break;
  case 0x12:
    puStack_14 = &stack0xfffffffc;
    FUN_00416244(param_1,**(undefined2 **)(param_2 + 4),2);
    break;
  case 0x13:
    puStack_14 = &stack0xfffffffc;
    FUN_00416244(param_1,**(undefined4 **)(param_2 + 4),4);
    break;
  case 0x14:
    uVar1 = (*(undefined4 **)(param_2 + 4))[1];
    FUN_00416340(param_1,uVar1,param_3,**(undefined4 **)(param_2 + 4),uVar1);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004123dc;
  puStack_18 = (undefined1 *)0x4123d4;
  FUN_00404ff0(&local_8,uStack_1c,puVar2);
  return;
}

