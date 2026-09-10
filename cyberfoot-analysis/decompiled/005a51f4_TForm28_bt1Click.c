// Address: 005a51f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm28_bt1Click(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 fVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  wchar_t *local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  puVar2 = PTR_DAT_0066ac78;
  local_1c = &stack0xfffffffc;
  iVar5 = 7;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_005a54ce;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  if (*(int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38) <
      *(int *)(&DAT_006d24fc +
              *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(puVar2 + 8) * 0x2f8) * 4)) {
    piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38);
    *piVar1 = *piVar1 + 500000;
    puVar3 = &stack0xfffffffc;
    if (*(int *)(&DAT_006d24fc +
                *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(puVar2 + 8) * 0x2f8) * 4) <=
        *(int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38)) {
      local_28 = 0x52b1;
      uStack_26 = 0x5a;
      (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
      puVar3 = local_1c;
    }
    local_1c = puVar3;
    local_28 = 0x52d4;
    uStack_26 = 0x5a;
    uVar4 = FUN_00402c38();
    fVar6 = (float10)CONCAT44(extraout_EDX,uVar4);
    local_30 = SUB104(fVar6,0);
    local_2c = (undefined4)((unkuint10)fVar6 >> 0x20);
    local_28 = (undefined2)((unkuint10)fVar6 >> 0x40);
    local_34 = 0x5a52f3;
    FUN_0040bdc0(&local_20);
    local_28 = 0x52fb;
    uStack_26 = 0x5a;
    uVar4 = FUN_00409ff8(local_20);
    local_28 = 0x5303;
    uStack_26 = 0x5a;
    FUN_006468f4(uVar4,&local_1c);
    local_28 = 0x5313;
    uStack_26 = 0x5a;
    FUN_004052cc(&stack0xffffffe8,&DAT_005a54ec,local_1c);
    local_28 = 0x5321;
    uStack_26 = 0x5a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x308),unaff_ESI);
    local_28 = 0x533f;
    uStack_26 = 0x5a;
    FUN_006468f4(*(undefined4 *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38),
                 &local_28);
    uVar4 = CONCAT22(uStack_26,local_28);
    local_28 = 0x534f;
    uStack_26 = 0x5a;
    FUN_004052cc(&local_24,&DAT_005a54ec,uVar4);
    local_28 = 0x535d;
    uStack_26 = 0x5a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x304),local_24);
    *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 8) * 0x2f8) =
         (longlong)
         ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 8) * 0x2f8)
               + _DAT_005a54f0);
    local_28 = 0x539b;
    uStack_26 = 0x5a;
    uVar4 = FUN_00402c38();
    local_28 = 0x53a3;
    uStack_26 = 0x5a;
    FUN_006468f4(uVar4,&local_2c);
    local_28 = 0x53b1;
    uStack_26 = 0x5a;
    FUN_004e1414(*(undefined4 *)(param_1 + 0x310),local_2c);
    local_28 = 0x53be;
    uStack_26 = 0x5a;
    (**(code **)(**(int **)(param_1 + 0x31c) + 100))(*(int **)(param_1 + 0x31c),1);
    local_28 = 0x53d9;
    uStack_26 = 0x5a;
    uVar4 = FUN_00402c38();
    local_28 = 0x53e1;
    uStack_26 = 0x5a;
    FUN_006468f4(uVar4,&local_38);
    local_28 = 0x53f1;
    uStack_26 = 0x5a;
    FUN_004052cc(&local_34,&DAT_005a54ec,local_38);
    local_28 = 0x53fc;
    uStack_26 = 0x5a;
    FUN_00404b6c(&local_30,local_34);
    local_28 = 0x5411;
    uStack_26 = 0x5a;
    FUN_00466238(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_30);
    if (0 < *(int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38)) {
      local_28 = 0x5437;
      uStack_26 = 0x5a;
      (**(code **)(**(int **)(param_1 + 0x31c) + 100))
                (*(int **)(param_1 + 0x31c),CONCAT31((int3)((uint)*(int *)PTR_DAT_0066afec >> 8),1))
      ;
    }
    local_28 = 0x54fc;
    uStack_26 = 0x5a;
    local_2c = 0x5a5457;
    uVar4 = FUN_00402c38();
    local_2c = 0x5a545f;
    FUN_006468f4(uVar4,&local_40);
    local_2c = local_40;
    local_30 = L"</shad>";
    local_34 = 0x5a5474;
    FUN_00405330(&local_3c,3);
    local_28 = 0x5489;
    uStack_26 = 0x5a;
    FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_3c);
  }
  else {
    local_28 = 0x5257;
    uStack_26 = 0x5a;
    local_1c = &stack0xfffffffc;
    (**(code **)(**(int **)(param_1 + 800) + 100))(*(int **)(param_1 + 800),0);
  }
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_005a54d5;
  local_20 = (undefined1 *)0x5a54a3;
  FUN_00405008(&local_40,4,puVar3);
  local_20 = (undefined1 *)0x5a54ab;
  FUN_004048d4(&local_30);
  local_20 = (undefined1 *)0x5a54b8;
  FUN_00405008(&local_2c,3);
  local_20 = (undefined1 *)0x5a54c0;
  FUN_004048d4(&local_20);
  local_20 = (undefined1 *)0x5a54cd;
  FUN_00405008(&local_1c,2);
  return;
}

