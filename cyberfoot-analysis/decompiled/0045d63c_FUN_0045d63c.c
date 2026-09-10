// Address: 0045d63c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045d63c(int *param_1,UINT *param_2,HWND param_3,WNDPROC param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  HWND hWndTo;
  UINT UVar4;
  undefined4 *in_FS_OFFSET;
  tagPOINT *lpPoints;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  tagPOINT local_10;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_24 = &LAB_0045d8f3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  UVar4 = *param_2;
  local_8 = param_1;
  if ((int)UVar4 < 0x105) {
    if (UVar4 != 0x104) {
      if ((int)UVar4 < 0x88) {
        if (UVar4 == 0x87) {
          puStack_20 = &stack0xfffffffc;
          cVar2 = FUN_0045d32c(param_1);
          puVar1 = puStack_20;
          if (cVar2 != '\0') {
            param_2[3] = 4;
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else if (UVar4 == 7) {
          puStack_20 = &stack0xfffffffc;
          piVar3 = (int *)FUN_0047e4c0(param_1);
          puVar1 = puStack_20;
          if ((piVar3 != (int *)0x0) &&
             (cVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,local_8), puVar1 = puStack_20,
             cVar2 == '\0')) {
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else if (UVar4 == 8) {
          puVar1 = &stack0xfffffffc;
          if ((*(byte *)(param_1 + 0x15) & 0x20) != 0) {
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        else {
          puVar1 = &stack0xfffffffc;
          if ((UVar4 == 0x84) && (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 7) & 0x10) != 0))
          {
            param_2[3] = 0xffffffff;
            *in_FS_OFFSET = uStack_28;
            return;
          }
        }
        goto LAB_0045d8b4;
      }
      if (UVar4 != 0x100) {
        if (UVar4 != 0x101) {
          puVar1 = &stack0xfffffffc;
          if (UVar4 == 0x102) {
            puStack_20 = &stack0xfffffffc;
            cVar2 = FUN_0046ba04(param_1,param_2);
            if (cVar2 != '\0') {
              *in_FS_OFFSET = uStack_28;
              return;
            }
            if ((((short)param_2[1] == 0xd) || (puVar1 = puStack_20, (short)param_2[1] == 0x1b)) &&
               (cVar2 = FUN_0045d32c(local_8), puVar1 = puStack_20, cVar2 != '\0')) {
              FUN_0045d350(local_8,0);
              *in_FS_OFFSET = uStack_28;
              return;
            }
          }
          goto LAB_0045d8b4;
        }
        goto LAB_0045d7d7;
      }
    }
    puVar1 = &stack0xfffffffc;
    if ((param_3 != (HWND)param_1[0x91]) &&
       (puStack_20 = &stack0xfffffffc, cVar2 = FUN_0046b854(param_1,param_2), puVar1 = puStack_20,
       cVar2 != '\0')) {
      *in_FS_OFFSET = uStack_28;
      return;
    }
  }
  else {
    if (0xbd00 < (int)UVar4) {
      if (((UVar4 != 0xbd02) && (UVar4 != 0xbd04)) && (puVar1 = &stack0xfffffffc, UVar4 != 0xbd06))
      goto LAB_0045d8b4;
LAB_0045d8a0:
      (**(code **)(*param_1 + 0x74))(param_1,param_2);
      *in_FS_OFFSET = uStack_28;
      return;
    }
    if (UVar4 == 0xbd00) goto LAB_0045d8a0;
    if (UVar4 != 0x105) {
      if (UVar4 == 0x200) {
        puStack_20 = &stack0xfffffffc;
        FUN_0048800c(*(undefined4 *)PTR_DAT_0066b3ac,param_1,param_2);
        puVar1 = puStack_20;
      }
      else {
        puVar1 = &stack0xfffffffc;
        if ((UVar4 == 0x205) &&
           (puStack_20 = &stack0xfffffffc, cVar2 = FUN_0045b544(param_1), puVar1 = puStack_20,
           cVar2 != '\0')) {
          local_10.x = (LONG)(short)param_2[2];
          local_10.y = (LONG)*(short *)((int)param_2 + 10);
          UVar4 = 1;
          lpPoints = &local_10;
          hWndTo = (HWND)FUN_0046cae0(local_8);
          MapWindowPoints(param_3,hWndTo,lpPoints,UVar4);
          *(undefined2 *)(param_2 + 2) = (undefined2)local_10.x;
          *(undefined2 *)((int)param_2 + 10) = (undefined2)local_10.y;
          (**(code **)(*local_8 + 0x74))(local_8,param_2);
          *in_FS_OFFSET = uStack_28;
          return;
        }
      }
      goto LAB_0045d8b4;
    }
LAB_0045d7d7:
    puStack_20 = &stack0xfffffffc;
    cVar2 = FUN_0046b93c(param_1,param_2);
    puVar1 = puStack_20;
    if (cVar2 != '\0') {
      *in_FS_OFFSET = uStack_28;
      return;
    }
  }
LAB_0045d8b4:
  puStack_20 = puVar1;
  UVar4 = CallWindowProcA(param_4,param_3,*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar4;
  if ((*param_2 == 0x203) && ((*(byte *)(local_8 + 0x14) & 0x80) != 0)) {
    FUN_00403c80(local_8);
  }
  *in_FS_OFFSET = uStack_28;
  return;
}

