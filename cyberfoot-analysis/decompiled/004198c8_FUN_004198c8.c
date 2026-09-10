// Address: 004198c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004198c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_DX;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined2 uVar6;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  puStack_38 = &LAB_00419b7c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_8 = param_3;
  puVar3 = (undefined4 *)FUN_004195b4(param_1,param_2,DAT_00419b8c);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_00419588(param_2);
  }
  else {
    iVar4 = FUN_00419c28(*(undefined4 *)*puVar3);
    switch(**(undefined1 **)*puVar3) {
    default:
      local_24 = *(int *)*puVar3 + 1;
      local_20 = 4;
      FUN_0040e468(PTR_DAT_004194f8,1,PTR_PTR_0066aff0,0,(short)&local_24);
      FUN_00404250();
      break;
    case 1:
    case 2:
    case 9:
      if (*(int *)(iVar4 + 1) < *(int *)(iVar4 + 5)) {
        uVar5 = FUN_00419860();
        FUN_00419f5c(param_1,puVar3,uVar5);
      }
      else {
        uVar5 = FUN_00419860();
        FUN_00419f5c(param_1,puVar3,uVar5);
      }
      break;
    case 3:
      sVar2 = FUN_004173c4(local_8);
      if (sVar2 == 0x100) {
        FUN_00417480(local_8,&local_10);
        FUN_00419fdc(param_1,puVar3,local_10);
      }
      else {
        sVar2 = FUN_004173c4(local_8);
        if (sVar2 == 0xb) {
          FUN_004143bc(local_8);
          iVar4 = FUN_00402c44();
          if (extraout_EDX < 0) {
            iVar4 = -iVar4;
          }
          FUN_00419f5c(param_1,puVar3,iVar4);
        }
        else {
          uVar5 = FUN_00419860();
          FUN_00419f5c(param_1,puVar3,uVar5);
        }
      }
      break;
    case 4:
      FUN_004143bc(local_8);
      FUN_0041a7f8(param_1,puVar3);
      break;
    case 5:
    case 10:
      FUN_00417480(local_8,&local_18);
      FUN_0041a4f8(param_1,puVar3,local_18);
      break;
    case 6:
      sVar2 = FUN_004173c4(local_8);
      if (sVar2 == 3) {
        uVar5 = FUN_00412a6c(local_8);
        FUN_00419f5c(param_1,puVar3,uVar5);
      }
      else {
        FUN_00417480(local_8,&local_14);
        FUN_0041a25c(param_1,puVar3,local_14);
      }
      break;
    case 0xb:
      FUN_004174c4(local_8,&local_1c);
      FUN_0041a60c(param_1,puVar3,local_1c);
      break;
    case 0xc:
      FUN_0041aa44(param_1,puVar3,local_8);
      break;
    case 0x10:
      uVar6 = SUB42(&stack0xfffffffc,0);
      uStack_3e = (undefined2)((uint)&stack0xfffffffc >> 0x10);
      uVar5 = FUN_00419860();
      FUN_0041ab24(param_1,puVar3,CONCAT22(uStack_3e,uVar6),uVar5,extraout_DX);
      break;
    case 0x11:
      FUN_00418020(&local_c,local_8,*(undefined4 *)*puVar3);
      FUN_00419f5c(param_1,puVar3,local_c);
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00419b83;
  puStack_38 = (undefined1 *)0x419b6e;
  FUN_00404ff0(&local_1c,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x419b7b;
  FUN_004048f8(&local_18,3);
  return;
}

