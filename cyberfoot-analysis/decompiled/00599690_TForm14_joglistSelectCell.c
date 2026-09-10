// Address: 00599690
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm14_joglistSelectCell(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 ***pppuVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_54 [16];
  undefined1 local_44 [8];
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 ***local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = 9;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_0059996b;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = (undefined4 *)0x5996c4;
  FUN_00466128(*(undefined4 *)(param_1 + 0x3dc),1,0);
  local_30 = (undefined4 *)0x5996d2;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x318) + 0x11c))();
  if (param_4 <= iVar4 + -1) {
    local_30 = (undefined4 *)0x5996e9;
    FUN_00466128(*(undefined4 *)(param_1 + 0x34c),1);
    if (*(int *)(PTR_DAT_0066ac78 + 8) == *(int *)PTR_DAT_0066b2b4) {
      local_30 = (undefined4 *)0x599708;
      (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),0);
    }
    else if (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) <
             *(int *)PTR_DAT_0066b610) {
      local_30 = (undefined4 *)0x599736;
      (**(code **)(**(int **)(param_1 + 0x3cc) + 100))(*(int **)(param_1 + 0x3cc),1);
      local_30 = (undefined4 *)0x599743;
      (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),1);
    }
    local_30 = &local_c;
    piVar1 = *(int **)(param_1 + 0x318);
    local_34 = (undefined4 ***)0x599757;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    local_34 = (undefined4 ***)0x599763;
    FUN_00416244(&stack0xffffffe4,uVar5,0xfc);
    local_34 = (undefined4 ***)&stack0xffffffe4;
    puStack_38 = (undefined1 *)0x599774;
    FUN_00416478(&local_2c,&DAT_00599984);
    pppuVar3 = local_34;
    local_34 = (undefined4 ***)0x59977f;
    FUN_0050e448(piVar1,&local_2c,pppuVar3);
    local_34 = (undefined4 ***)0x59978a;
    FUN_00404b6c(&local_8,local_c);
    local_34 = (undefined4 ***)0x599792;
    uVar5 = FUN_00409ff8(local_8);
    local_34 = (undefined4 ***)0x59979b;
    FUN_00599988(param_1,uVar5);
    local_34 = &local_34;
    piVar1 = *(int **)(param_1 + 0x318);
    puStack_38 = (undefined1 *)0x5997af;
    uVar5 = (**(code **)(*piVar1 + 0x138))();
    puStack_38 = (undefined1 *)0x5997bb;
    FUN_00416244(local_44,uVar5,0xfc);
    puStack_38 = local_44;
    uStack_3c = 0x5997cc;
    FUN_00416478(local_54,&DAT_00599984);
    puVar2 = puStack_38;
    puStack_38 = (undefined1 *)0x5997d7;
    FUN_0050e448(piVar1,local_54,puVar2);
    puStack_38 = (undefined1 *)0x5997e2;
    FUN_00404b6c(&local_30,local_34);
    puStack_38 = (undefined1 *)0x5997ea;
    iVar4 = FUN_00409ff8(local_30);
    if ((((*(char *)(*(int *)PTR_DAT_0066b5b8 + 0x7d + iVar4 * 0x130) == '\0') ||
         (*(int *)PTR_DAT_0066b2b4 == *(int *)(PTR_DAT_0066ac78 + 8))) ||
        (*(int *)PTR_DAT_0066b610 <=
         *(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8))) ||
       ((float10)*(longlong *)
                  (*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) <
        (float10)*(longlong *)(*(int *)PTR_DAT_0066b5b8 + 0x48 + iVar4 * 0x130))) {
      puStack_38 = (undefined1 *)0x599871;
      (**(code **)(**(int **)(param_1 + 0x3cc) + 100))(*(int **)(param_1 + 0x3cc),0);
    }
    else {
      puStack_38 = (undefined1 *)0x599862;
      (**(code **)(**(int **)(param_1 + 0x3cc) + 100))
                (*(int **)(param_1 + 0x3cc),CONCAT31((int3)((uint)(iVar4 * 0x26) >> 8),1));
    }
    if (((*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar4 * 0x130) == 1) &&
        (*(int *)PTR_DAT_0066b2b4 != *(int *)(PTR_DAT_0066ac78 + 8))) &&
       (*(int *)(*(int *)PTR_DAT_0066af70 + 100 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) <
        *(int *)PTR_DAT_0066b610)) {
      puStack_38 = (undefined1 *)0x5998c3;
      (**(code **)(**(int **)(param_1 + 0x3c8) + 100))(*(int **)(param_1 + 0x3c8),1);
    }
    else {
      puStack_38 = (undefined1 *)0x5998d2;
      (**(code **)(**(int **)(param_1 + 0x3c8) + 100))(*(int **)(param_1 + 0x3c8),0);
    }
    if (*(int *)(*(int *)PTR_DAT_0066b5b8 + 0x100 + iVar4 * 0x130) == 2) {
      local_30 = (undefined4 *)0x5998f0;
      (**(code **)(**(int **)(param_1 + 0x3cc) + 100))(*(int **)(param_1 + 0x3cc),0);
      local_30 = (undefined4 *)0x5998fd;
      (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(*(int **)(param_1 + 0x3d0),0);
      local_30 = (undefined4 *)0x59990a;
      (**(code **)(**(int **)(param_1 + 0x3c8) + 100))(*(int **)(param_1 + 0x3c8),0);
    }
    local_30 = (undefined4 *)0x599917;
    FUN_00466128(*(undefined4 *)(param_1 + 0x36c),0);
  }
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_00599972;
  puStack_28 = (undefined1 *)0x599937;
  FUN_00405744(local_54,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x59993f;
  FUN_00404ff0(&local_34);
  puStack_28 = (undefined1 *)0x599947;
  FUN_004048d4(&local_30);
  puStack_28 = (undefined1 *)0x59995a;
  FUN_00405744(&local_2c,PTR_DAT_004010f8,2);
  puStack_28 = (undefined1 *)0x599962;
  FUN_00404ff0(&local_c);
  puStack_28 = (undefined1 *)0x59996a;
  FUN_004048d4(&local_8);
  return;
}

