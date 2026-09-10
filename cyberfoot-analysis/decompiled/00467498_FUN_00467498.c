// Address: 00467498
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00467498(int *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  BYTE local_118 [256];
  int *local_18;
  uint local_14;
  undefined1 local_10;
  undefined2 local_e;
  uint local_c;
  
  if (((((*(byte *)(param_1 + 7) & 0x10) != 0) &&
       (local_18 = (int *)FUN_0047e4c0(param_1), local_18 != (int *)0x0)) && (local_18[0x94] != 0))
     && (cVar2 = (**(code **)(*(int *)local_18[0x94] + 0x24))((int *)local_18[0x94],param_1,param_2)
        , cVar2 != '\0')) {
    return;
  }
  if ((*param_2 < 0x100) || (0x108 < *param_2)) {
    uVar1 = *param_2;
    if ((uVar1 < 0x200) || (0x20a < uVar1)) {
      if (uVar1 == 0xb00b) {
        FUN_00465da8(param_1,0xb00b,param_2[1],param_2[2]);
      }
    }
    else {
      if (((*(byte *)(param_1 + 0x14) & 0x80) == 0) &&
         (((uVar1 == 0x203 || (uVar1 == 0x206)) || (uVar1 == 0x209)))) {
        *param_2 = *param_2 - 2;
      }
      uVar1 = *param_2;
      if (uVar1 == 0x200) {
        FUN_0048800c(*(undefined4 *)PTR_DAT_0066b3ac,param_1,param_2);
      }
      else {
        if (uVar1 != 0x201) {
          if (uVar1 == 0x202) {
            *(ushort *)(param_1 + 0x15) = *(ushort *)(param_1 + 0x15) & 0xfffe;
            goto LAB_0046761a;
          }
          if (uVar1 != 0x203) {
            if (((*(char *)(DAT_0066cb54 + 0x20) != '\0') && (*(int *)(DAT_0066cb54 + 0x1c) != 0))
               && (*param_2 == *(uint *)(DAT_0066cb54 + 0x1c))) {
              GetKeyboardState(local_118);
              local_14 = *param_2;
              local_10 = FUN_0047e404(local_118);
              local_e = (undefined2)param_2[1];
              local_c = param_2[2];
              FUN_00403c80(param_1,&local_14);
              return;
            }
            goto LAB_0046761a;
          }
        }
        if (*(char *)((int)param_1 + 0x5d) == '\x01') {
          FUN_00403c80(param_1);
          return;
        }
        *(ushort *)(param_1 + 0x15) = *(ushort *)(param_1 + 0x15) | 1;
      }
    }
  }
  else {
    local_18 = (int *)FUN_0047e4c0(param_1);
    if ((local_18 != (int *)0x0) &&
       (cVar2 = (**(code **)(*local_18 + 0xf0))(local_18,param_1,param_2), cVar2 != '\0')) {
      return;
    }
  }
LAB_0046761a:
  (**(code **)(*param_1 + -0x14))(param_1,param_2);
  return;
}

