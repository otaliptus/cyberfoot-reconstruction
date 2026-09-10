// Address: 004d7ae4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d7ae4(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_004d7c34;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x4d7b0b;
  local_8 = param_1;
  cVar2 = FUN_00421f74(param_2);
  if ((cVar2 == '\x06') || (cVar2 == '\f')) {
    puStack_34 = (undefined1 *)0x4d7b1d;
    FUN_00423834(param_2,&local_10);
    puStack_34 = (undefined1 *)0x4d7b28;
    FUN_004051d4(&local_c,local_10);
    puStack_34 = (undefined1 *)0x4d7b33;
    (**(code **)(*local_8 + 0x2c))(local_8,local_c);
  }
  else {
    puStack_34 = (undefined1 *)0x4d7b3f;
    cVar2 = FUN_00421f74(param_2);
    if (cVar2 != '\x12') {
      puStack_34 = (undefined1 *)0x4d7b65;
      FUN_004d5774(local_8);
      puStack_38 = &LAB_004d7bf2;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_34 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x48))();
      FUN_00422b94(param_2);
      while( true ) {
        cVar2 = FUN_00421c30(param_2);
        if (cVar2 != '\0') break;
        cVar2 = FUN_00421f74(param_2);
        if ((cVar2 == '\x06') || (cVar2 == '\f')) {
          FUN_00423834(param_2,&local_1c);
          FUN_004051d4(&local_18,local_1c);
          (**(code **)(*local_8 + 0x38))(local_8,local_18);
        }
        else {
          FUN_004238f0(param_2,&local_20);
          (**(code **)(*local_8 + 0x38))(local_8,local_20);
        }
      }
      FUN_00422b9c(param_2);
      puVar1 = puStack_34;
      *in_FS_OFFSET = uStack_3c;
      puStack_34 = (undefined1 *)0x4d7bf9;
      puStack_38 = (undefined1 *)0x4d7bf1;
      FUN_004d5830(local_8,uStack_3c,puVar1);
      return;
    }
    puStack_34 = (undefined1 *)0x4d7b4d;
    FUN_004238f0(param_2,&local_14);
    puStack_34 = (undefined1 *)0x4d7b58;
    (**(code **)(*local_8 + 0x2c))(local_8,local_14);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004d7c3b;
  puStack_2c = (undefined1 *)0x4d7c0e;
  FUN_00404ff0(&local_20,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x4d7c16;
  FUN_004048d4(&local_1c);
  puStack_2c = (undefined1 *)0x4d7c23;
  FUN_00405008(&local_18,2);
  puStack_2c = (undefined1 *)0x4d7c2b;
  FUN_004048d4(&local_10);
  puStack_2c = (undefined1 *)0x4d7c33;
  FUN_00404ff0(&local_c);
  return;
}

