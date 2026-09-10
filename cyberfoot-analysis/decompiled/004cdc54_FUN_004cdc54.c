// Address: 004cdc54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004cdc54(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  byte bVar6;
  undefined1 local_28 [16];
  int local_18;
  LONG local_14;
  tagPOINT local_d;
  undefined1 local_5;
  
  local_5 = (undefined1)param_3;
  FUN_004677e0(param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    if ((char)param_1[0xbb] != '\0') {
      if (param_1[0xb8] == 0) {
        iVar4 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
        param_1[0xb8] = iVar4;
      }
      FUN_0043b254(param_1[0xb8]);
      FUN_0043b244(param_1[0xb8],param_1[0xb9]);
      FUN_0043b234(param_1[0xb8],1);
    }
    *(undefined1 *)((int)param_1 + 0x211) = 1;
    *(undefined1 *)((int)param_1 + 0x213) = 1;
    if ((char)param_1[0x69] != '\0') {
      (**(code **)(*param_1 + 0xc4))();
    }
    if ((param_1[0x85] == 0) && (0 < *(int *)PTR_DAT_0066aeac)) {
      iVar4 = FUN_0043b0ac(PTR_PTR_00438f00,1,param_1);
      param_1[0x85] = iVar4;
      FUN_0043b254(iVar4);
      FUN_0043b244(param_1[0x85],*(undefined4 *)PTR_DAT_0066aeac);
      FUN_0043b234(param_1[0x85],1);
    }
    param_1[0x88] = 0x14;
    *(undefined1 *)(param_1 + 0x89) = 1;
    if (*(char *)((int)param_1 + 0x23f) == '\0') {
      (**(code **)(*param_1 + 0xdc))();
    }
    if (((char)param_1[0x94] == '\0') && (param_1[0x12] + -0xe < param_5)) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    if (((char)param_1[0x94] == '\x01') && (param_1[0x13] + -0xe < param_4)) {
      uVar5 = CONCAT31((int3)((uint)(param_1[0x13] + -0xe) >> 8),1);
    }
    else {
      uVar5 = 0;
    }
    bVar6 = (byte)uVar5;
    if ((((*(char *)((int)param_1 + 0x23f) == '\0') &&
         (cVar3 = (**(code **)(*param_1 + 0xdc))(), uVar5 = extraout_EDX, cVar3 != '\0')) ||
        (((*(byte *)((int)param_1 + 0x23f) & (bVar6 | bVar2)) != 0 && ((char)param_1[0x90] != '\0'))
        )) || ((((*(char *)((int)param_1 + 0x23f) != '\0' && ((char)param_1[0x90] == '\0')) &&
                (*(char *)((int)param_1 + 0x236) != '\x01')) && (param_1[0x8e] < 1)))) {
      *(undefined1 *)((int)param_1 + 0x231) = 0;
      FUN_004d0408(param_1);
      if (param_1[0x91] != 0) {
        *(int **)(param_1[0x91] + 100) = param_1;
        *(byte *)((int)param_1 + 0x211) = *(byte *)(param_1 + 0x90) ^ 1;
        FUN_004ce5b8(param_1,1);
        *(undefined1 *)((int)param_1 + 0x232) = 0;
        (**(code **)(*param_1 + 0x80))();
        if (*(char *)((int)param_1 + 0x241) == '\0') {
          FUN_004070b8(param_1[0x10],param_1[0x11] + param_1[0x13],&local_d);
        }
        else if (*(char *)((int)param_1 + 0x241) == '\x01') {
          FUN_004070b8(param_1[0x10] + param_1[0x12],param_1[0x11],&local_d);
        }
        FUN_00465d20(param_1[0xc],&local_d,&local_18);
        local_d.x = local_18;
        local_d.y = local_14;
        piVar1 = (int *)param_1[0x91];
        if ((char)piVar1[0x18] == '\x01') {
          local_d.x = local_18 + param_1[0x12];
        }
        else if ((char)piVar1[0x18] == '\x02') {
          local_d.x = param_1[0x12] >> 1;
          if (local_d.x < 0) {
            local_d.x = local_d.x + (uint)((param_1[0x12] & 1U) != 0);
          }
          local_d.x = local_18 + local_d.x;
        }
        (**(code **)(*piVar1 + 0x40))(piVar1,local_d.x,local_14);
        *(undefined1 *)((int)param_1 + 0x211) = 0;
        FUN_004ce5b8(param_1,0);
        GetCursorPos(&local_d);
        FUN_00465d4c(param_1,&local_d,&local_18);
        local_d.x = local_18;
        local_d.y = local_14;
        (**(code **)(*param_1 + 0x44))(param_1,local_28);
        cVar3 = FUN_004070c0(local_28,&local_d);
        if (cVar3 == '\0') {
          *(undefined1 *)((int)param_1 + 0x232) = 0;
          *(undefined1 *)((int)param_1 + 0x231) = 0;
          *(undefined1 *)((int)param_1 + 0x34a) = 0;
          *(undefined1 *)((int)param_1 + 0x27e) = 0;
        }
        (**(code **)(*param_1 + 0x80))();
      }
      (**(code **)(*param_1 + 0x7c))();
    }
    else {
      if (*(char *)((int)param_1 + 0x236) == '\x01') {
        FUN_004cfa08(param_1,CONCAT31((int3)((uint)uVar5 >> 8),*(undefined1 *)((int)param_1 + 0x233)
                                     ) ^ 1);
      }
      if (*(char *)((int)param_1 + 0x233) == '\0') {
        *(undefined1 *)(param_1 + 0x8c) = 2;
        (**(code **)(*param_1 + 0x7c))();
      }
      if (*(char *)((int)param_1 + 0x236) == '\x01') {
        *(undefined1 *)(param_1 + 0x8c) = 2;
        (**(code **)(*param_1 + 0x80))();
      }
      *(undefined1 *)((int)param_1 + 0x235) = 1;
    }
  }
  return;
}

