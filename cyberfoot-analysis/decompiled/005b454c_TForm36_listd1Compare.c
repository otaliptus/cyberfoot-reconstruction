// Address: 005b454c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm36_listd1Compare(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_24 = &stack0xfffffffc;
  local_14 = 7;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_005b47a6;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = 0x5b4583;
  local_8 = local_14;
  (**(code **)(*piRam00000008 + 0xc))(piRam00000008,0,&local_8);
  local_30 = 0x5b458b;
  local_30 = FUN_00409ff8(local_8);
  local_34 = 0x5b4599;
  (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
            (*(int **)(in_stack_0000000c + 8),0,&local_c);
  local_34 = 0x5b45a1;
  iVar3 = FUN_00409ff8(local_c);
  if (iVar3 < local_30) {
    *in_stack_00000004 = 0xffffffff;
  }
  else {
    local_30 = 0x5b45c1;
    (**(code **)(*piRam00000008 + 0xc))(piRam00000008,0,&local_10);
    local_30 = 0x5b45c9;
    local_30 = FUN_00409ff8(local_10);
    local_34 = 0x5b45d7;
    (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
              (*(int **)(in_stack_0000000c + 8),0,&local_14);
    local_34 = 0x5b45df;
    iVar3 = FUN_00409ff8(local_14);
    if (local_30 < iVar3) {
      *in_stack_00000004 = 1;
    }
    else {
      local_30 = 0x5b4602;
      (**(code **)(*piRam00000008 + 0xc))(piRam00000008,2,&stack0xffffffe8);
      local_30 = 0x5b460a;
      local_30 = FUN_00409ff8(unaff_EBX);
      local_34 = 0x5b461b;
      (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
                (*(int **)(in_stack_0000000c + 8),2,&stack0xffffffe4);
      local_34 = 0x5b4623;
      iVar3 = FUN_00409ff8(unaff_ESI);
      if (iVar3 < local_30) {
        *in_stack_00000004 = 0xffffffff;
      }
      else {
        local_30 = 0x5b4646;
        (**(code **)(*piRam00000008 + 0xc))(piRam00000008,2,&stack0xffffffe0);
        local_30 = 0x5b464e;
        local_30 = FUN_00409ff8(unaff_EDI);
        local_34 = 0x5b465f;
        (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
                  (*(int **)(in_stack_0000000c + 8),2,&local_24);
        local_34 = 0x5b4667;
        iVar3 = FUN_00409ff8(local_24);
        if (local_30 < iVar3) {
          *in_stack_00000004 = 1;
        }
        else {
          local_30 = 0x5b468a;
          (**(code **)(*piRam00000008 + 0xc))(piRam00000008,7,&local_28);
          local_30 = 0x5b4692;
          local_30 = FUN_00409ff8(local_28);
          local_34 = 0x5b46a3;
          (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
                    (*(int **)(in_stack_0000000c + 8),7,&local_2c);
          local_34 = 0x5b46ab;
          iVar3 = FUN_00409ff8(local_2c);
          if (iVar3 < local_30) {
            *in_stack_00000004 = 0xffffffff;
          }
          else {
            local_30 = 0x5b46ce;
            (**(code **)(*piRam00000008 + 0xc))(piRam00000008,7,&local_30);
            iVar3 = local_30;
            local_30 = 0x5b46d6;
            local_30 = FUN_00409ff8(iVar3);
            local_34 = 0x5b46e7;
            (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
                      (*(int **)(in_stack_0000000c + 8),7,&local_34);
            uVar1 = local_34;
            local_34 = 0x5b46ef;
            iVar3 = FUN_00409ff8(uVar1);
            if (local_30 < iVar3) {
              *in_stack_00000004 = 1;
            }
            else {
              local_30 = 0x5b4712;
              (**(code **)(*piRam00000008 + 0xc))(piRam00000008,5,&local_38);
              local_30 = 0x5b471a;
              local_30 = FUN_00409ff8(local_38);
              local_34 = 0x5b472b;
              (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
                        (*(int **)(in_stack_0000000c + 8),5,&local_3c);
              local_34 = 0x5b4733;
              iVar3 = FUN_00409ff8(local_3c);
              if (iVar3 < local_30) {
                *in_stack_00000004 = 0xffffffff;
              }
              else {
                local_30 = 0x5b4753;
                (**(code **)(*piRam00000008 + 0xc))(piRam00000008,5,&local_40);
                local_30 = 0x5b475b;
                local_30 = FUN_00409ff8(local_40);
                local_34 = 0x5b476c;
                (**(code **)(**(int **)(in_stack_0000000c + 8) + 0xc))
                          (*(int **)(in_stack_0000000c + 8),5,&local_44);
                local_34 = 0x5b4774;
                iVar3 = FUN_00409ff8(local_44);
                if (local_30 < iVar3) {
                  *in_stack_00000004 = 1;
                }
                else {
                  *in_stack_00000004 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar2 = local_24;
  *in_FS_OFFSET = local_2c;
  local_24 = &LAB_005b47ad;
  local_28 = (undefined1 *)0x5b47a5;
  FUN_004048f8(&local_44,0x10,puVar2);
  return;
}

