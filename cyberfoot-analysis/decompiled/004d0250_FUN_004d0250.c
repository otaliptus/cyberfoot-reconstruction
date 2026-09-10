// Address: 004d0250
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d0250(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char local_6;
  
  FUN_00467a98(param_1,param_2,param_3,param_4);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    FUN_004d019c(param_1);
    cVar1 = *(char *)((int)param_1 + 0x27e);
    *(undefined1 *)((int)param_1 + 0x27e) = 0;
    if (*(char *)((int)param_1 + 0x23f) != '\0') {
      if ((char)param_1[0x94] == '\0') {
        if (param_1[0x12] + -0xc <= param_3) {
          *(undefined1 *)((int)param_1 + 0x27e) = 1;
        }
      }
      else if (((char)param_1[0x94] == '\x01') && (param_1[0x13] + -0xc <= param_4)) {
        *(undefined1 *)((int)param_1 + 0x27e) = 1;
      }
    }
    if (cVar1 != *(char *)((int)param_1 + 0x27e)) {
      (**(code **)(*param_1 + 0x7c))();
    }
    if (*(char *)((int)param_1 + 0x235) == '\0') {
      if (*(char *)((int)param_1 + 0x231) == '\0') {
        FUN_004d019c(param_1);
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x233) == '\0') {
        local_6 = '\0';
      }
      else {
        local_6 = '\x04';
      }
      if ((((-1 < param_3) && (iVar2 = FUN_00465c0c(param_1), param_3 < iVar2)) && (-1 < param_4))
         && (iVar2 = FUN_00465c50(param_1), param_4 <= iVar2)) {
        if (*(char *)((int)param_1 + 0x233) == '\0') {
          local_6 = '\x02';
        }
        else {
          local_6 = '\x04';
        }
      }
      if ((*(char *)((int)param_1 + 0x236) == '\x01') && (*(char *)((int)param_1 + 0x233) != '\0'))
      {
        local_6 = '\x02';
      }
      if (local_6 != (char)param_1[0x8c]) {
        *(char *)(param_1 + 0x8c) = local_6;
        (**(code **)(*param_1 + 0x7c))();
      }
    }
  }
  return;
}

