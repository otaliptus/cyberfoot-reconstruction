// Address: 004195f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004195f4(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  undefined4 local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  puStack_38 = &LAB_0041984b;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_9 = param_3;
  local_8 = param_1;
  FUN_004190c4(param_4);
  puVar2 = (undefined4 *)FUN_004195b4(local_8,param_2,DAT_0041985c);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00419588(param_2);
  }
  else {
    puVar1 = *(undefined1 **)*puVar2;
    switch(*puVar1) {
    default:
      local_24 = puVar1 + 1;
      local_20 = 4;
      FUN_0040e468(PTR_DAT_004194f8,1,PTR_PTR_0066aff0,0,&local_24);
      FUN_00404250();
      break;
    case 1:
    case 2:
    case 7:
    case 9:
      uVar4 = FUN_00419ee8(local_8,puVar2);
      FUN_00416244(param_4,uVar4,0xfc);
      break;
    case 3:
      if (local_9 == '\0') {
        iVar3 = FUN_00419c28(puVar1);
        if ((undefined *)**(int **)(iVar3 + 9) == PTR_DAT_00401000) {
          uVar4 = FUN_00419ee8(local_8,puVar2);
          FUN_00416414(param_4,uVar4);
        }
        else {
          uVar4 = FUN_00419ee8(local_8,puVar2);
          FUN_00416244(param_4,uVar4,0xfc);
        }
      }
      else {
        FUN_00419fb8(local_8,puVar2,&local_10);
        FUN_00416478(param_4,local_10);
      }
      break;
    case 4:
      FUN_0041a6e0(local_8,puVar2);
      FUN_0041643c(param_4);
      break;
    case 5:
    case 10:
      FUN_0041a4b8(local_8,puVar2,&local_18);
      FUN_00416478(param_4,local_18);
      break;
    case 6:
      if (local_9 == '\0') {
        uVar4 = FUN_00419ee8(local_8,puVar2);
        FUN_00416244(param_4,uVar4,0xfc);
      }
      else {
        func_0x0041a02c(local_8,puVar2,0,&local_14);
        FUN_00416478(param_4,local_14);
      }
      break;
    case 8:
      FUN_004164a4(param_4,puVar1 + 1);
      break;
    case 0xb:
      FUN_0041a524(local_8,puVar2,&local_1c);
      FUN_004164f4(param_4,local_1c);
      break;
    case 0xc:
      FUN_0041aa04(local_8,puVar2,param_4);
      break;
    case 0x10:
      FUN_0041aafc(local_8,puVar2);
      FUN_00416340(param_4);
      break;
    case 0x11:
      uVar4 = FUN_00419ee8(local_8,puVar2);
      FUN_00417cd0(param_4,uVar4,*(undefined4 *)*puVar2);
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00419852;
  puStack_38 = (undefined1 *)0x41983d;
  FUN_00404ff0(&local_1c,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x41984a;
  FUN_004048f8(&local_18,3);
  return;
}

